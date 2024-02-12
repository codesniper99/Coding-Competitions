#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;


map<ll,ll> unlimited;
vector<ll> recipes[200002];
set<pair<ll,ll>> degree;
set<pair<ll,ll>> cpy ;
ll dp[200002];
bool possible(ll mincoins, vector<ll> &c, ll n){


    ll totcoins = 0;

    while(!cpy.empty()){

        auto topp = cpy.begin();
        pair<ll,ll> p = *topp;
        cpy.erase(topp);
        ll ind = p.second;
        if(unlimited[ind]==1){
            dp[ind] = 0;
            continue;
        } else {

            ll m = recipes[ind].size();

            ll ans = 0;
            if(m == 0){
                ans+=c[ind];
            } else {
                for(ll i=0;i<m;i++){
                    vector<ll> listRecipe = recipes[ind];
                    ll potionUsed = listRecipe[i];
                    ans+= dp[potionUsed];
                }
            }

            dp[ind] = min(dp[ind], ans);


        }

        totcoins+= dp[ind];
    }



    return totcoins>=mincoins;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> costs(n);
        degree.clear();
        cpy.clear();
        for(ll i=0;i<=n;i++){
            recipes[i].clear();
        }
        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin>>costs[i];
            sum+=costs[i];
        }
        unlimited.clear();


        bool visited[n];
        memset(visited, false, sizeof(visited));
        for(ll i=0;i<k;i++){
            ll x;
            cin>>x;
            x--;
            unlimited[x] = 1;
            visited[x] = true;
        }
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            ll degreeFound  = 0;
            for(ll j=0;j<m;j++){
                ll potion;
                cin>>potion;
                potion--;
                recipes[i].push_back(potion);
                if(visited[potion]!=1){
                    degreeFound++;
                }
            }
            visited[i] = 1;
            degree.insert({degreeFound, i});
            cout<<"Degree : "<< degreeFound<< ' '<<i<<'\n';
        }

        memset(dp, INT_MAX, sizeof(dp));
        ll l = 0, r = sum;

        while(l<r){
            cpy = degree;
            ll mincoins = l +(r-l)/2;

            if( possible(mincoins, costs, n) )
            {

                r = mincoins;
            } else {
                l = mincoins+1;
            }


        }
        //cout<<l<<'\n';
        for(ll i=0;i<n;i++){
            cout<<dp[i]<<' ';
        }
        cout<<'\n';


    }


    return 0;
}
