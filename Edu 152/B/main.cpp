#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

class Compare{
    public:
    bool operator()(pair<ll,ll> &a, pair<ll,ll> &b){

        if(a.first<b.first){
            return true;
        } else {

            if(a.first == b.first){
                if(a.second>b.second){
                    return true;
                }
                return false;
            } else{
                return false;
            }

        }

        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, Compare> pq;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            pq.push({a[i], i});

        }
        vector<ll> ans;
        while(!pq.empty()){
            pair<ll,ll> tp = pq.top();
            //cout<<tp.first<<' '<<tp.second<<'\n';
            pq.pop();
            ll health = tp.first;
            ll ind = tp.second;
            if(health-k<=0){
                ans.push_back(ind+1);

            }
            else {
                if(tp.first%k==0){
                    tp.first = k;
                }else
                    tp.first%=k;
                pq.push(tp);
            }




        }
        for(auto x: ans){
            cout<<x<<' ';
        }
        cout<<'\n';

    }


    return 0;
}
