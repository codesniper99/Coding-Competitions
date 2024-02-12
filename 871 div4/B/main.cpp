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
        ll maxx = 0;ll count=0;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x == 0){
                maxx = max(maxx, count+1);
                count++;
            } else{
                    count = 0;
                }
        }
        cout<<maxx<<'\n';
    }


    return 0;
}
