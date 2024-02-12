#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> p(n);
        ll r = 0;
        for(ll i=0;i<n;i++){
            cin>>p[i];
            if(p[i]==n) {
                r = i-1;
            }
        }
        if(p[n-1]==n) {
            r=n-1;
        }
        if(p[0]==n) {
            for(ll i=0;i<n;i++) {
                if(p[i]==n-1) {
                    if(i==n-1) {
                       r=n-1;
                    } else {
                       r=i-1;
                    }
                }
            }
        }
        ll l=r;
        while(p[0]<p[l-1] && l-1 >=0) {
            l--;
        }

        vector<ll> ans;

        for(ll i=r+1;i<n;i++) {
            ans.push_back(p[i]);
        }
        for(ll i=r;i>=l;i--) {
            ans.push_back(p[i]);
        }
        for(ll i=0;i<l;i++) {
            ans.push_back(p[i]);
        }

        for(ll i= 0;i<n;i++) {
            cout<<ans[i]<<' ';
        }
        cout<<'\n';


    }
    return 0;
}
