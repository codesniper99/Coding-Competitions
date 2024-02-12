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
        for(ll i=0;i<n;i++){
            cin>>a[i];

        }
        ll prev = a[n-1], maxx = 0;
        for(ll i=n-2;i>=0;i--){
            if(a[i]>prev){
                maxx = max(maxx, a[i]);
            }
            prev = a[i];
        }
        cout<<maxx<<'\n';
    }


    return 0;
}
