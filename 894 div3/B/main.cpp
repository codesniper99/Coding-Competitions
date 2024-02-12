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
        ll n;
        cin>>n;
        vector<ll> b(n);
        for(ll i=0; i<n; i++){
            cin>>b[i];
        }
        vector<ll> a;
        a.push_back(b[0]);
        for(ll i=1; i<n; i++){
            if(b[i]>=b[i-1]){
                a.push_back(b[i]);
            } else {
                ll mn = min(b[i], b[i-1]);
                if(mn == 1){
                    a.push_back(1);
                    a.push_back(1);
                } else {
                    a.push_back(mn-1);
                    a.push_back(mn);
                }
            }
        }
        cout<<a.size()<<'\n';
        for(auto x: a){
            cout<<x<<' ';
        }
        cout<<'\n';

    }


    return 0;
}
