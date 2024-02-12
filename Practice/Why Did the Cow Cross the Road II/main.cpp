#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    freopen("maxcross.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    ll n,k,b;
    cin>>n>>k>>b;
    vector<ll> a(n,1);
    for(ll i=0;i<b;i++){
        ll x;
        cin>>x;
        a[x-1] = 0;

    }
    vector<ll> pref(n+1,0);
    for(ll i=1;i<=n;i++){
        pref[i] = a[i-1]+pref[i-1];
       // cout<<pref[i]<<' ';
    }

    ll minn =n;
    for(ll i=k;i<=n;i++){
        minn = min(minn,  k  - (pref[i]-pref[i-k]));
    }
    freopen("maxcross.out", "w", stdout);
    cout<<minn<<'\n';
    return 0;
}
