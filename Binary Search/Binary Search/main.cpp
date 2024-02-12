#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i =0;i<n;i++){

        cin>>a[i];
    }
    while(k--){
        ll q;
        cin>>q;
        ll l = 0, r = n-1,m;
        while(l<r){
             m = l +(r-l)/2;
            if(q <= a[m]){
                r = m;
            } else {
                l = m+1;
                }

        }
        if(a[l] == q){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }



    return 0;
}
