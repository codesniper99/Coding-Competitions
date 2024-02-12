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
        vector<ll> a(n);
        vector<ll>b(n);
        bool allzero = true;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=0){
                allzero = false;
            }
        }

        for(ll i=0;i<n;i++){
            cin>>b[i];
        }

        if(allzero){
            cout<<"YES\n";
            continue;
        }

        bool allcancel = true;
        vector<ll>c(n);
        for(ll i=0;i<n;i++){
            ll x = abs(b[i]-a[i]);
            if(x!=0){
                allcancel = false;
            }
            c[i] = x;
        }

        if(allcancel){
            cout<<"YES\n";
            continue;
        }

        ll bitdiff = (c[0]+1)&1;
        bool allgoodbois = true;
        // one more iteration
        for(ll i=1;i<n;i++){
            if(bitdiff^(c[i]+1)){
                allgoodbois = false;
            }
        }
        if(allgoodbois){
            cout<<"YES\n";
            continue;
        }

        cout<<"NO\n";



    }


    return 0;
}
