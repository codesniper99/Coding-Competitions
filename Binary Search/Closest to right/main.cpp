#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n+2);
    a[0]  = INT_MIN;
    a[n+1] = INT_MAX;
    for(ll i =1;i<=n;i++){

        cin>>a[i];
    }
    while(k--){
        ll q;
        cin>>q;
        ll l = 0, r = n+1,m;
        while(l<r){
             m = l +(r-l)/2;
            if(a[m]>=q ){
                r = m;
            } else {
                l = m+1;
                }

        }
        cout<<l<<'\n';

    }



    return 0;
}
