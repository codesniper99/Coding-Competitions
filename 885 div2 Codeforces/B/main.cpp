#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll k, n;
        cin>>n>>k;
        vector<ll> c(n);
        map<ll,vector<ll>> jump;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            c[i] = x;
            jump[x].push_back(i);
        }

        ll ans = INT_MAX;
        ll visited[n+1];
        memset(visited, 0, sizeof(visited));
        for(ll i=0;i<n;i++){

            if(!visited[i]){
                vector<ll> biggest_gap;
                biggest_gap.push_back(i);
                vector<ll> future = jump[c[i]];
                ll fut_size = future.size();
                for(ll j=1;j<fut_size;j++){
                    biggest_gap.push_back(future[j]-future[j-1]-1);
                    visited[future[j]] = 1;
                }
                biggest_gap.push_back(n-1-future[fut_size-1]);
                sort(biggest_gap.begin(), biggest_gap.end());
                ll biggap_sz = biggest_gap.size();
                if(biggap_sz>0){
                    biggest_gap[biggap_sz-1]/=2;
                    sort(biggest_gap.begin(), biggest_gap.end());
                    ans = min(ans, biggest_gap[biggap_sz-1]);
                }
                visited[i] = true;
            }

        }

        cout<<ans<<'\n';


    }


    return 0;
}
