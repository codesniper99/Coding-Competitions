#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    ll q;
    cin>>n>>q;
    vector<ll> a(n);
    vector<ll> pre(n);
    ll s = 0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        pre[i] = s;
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<pre[r-1]-(l==0?0:pre[l-1])<<'\n';
    }



    return 0;
}
