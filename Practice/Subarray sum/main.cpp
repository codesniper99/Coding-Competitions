#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    ll x;
    cin>>n>>x;
    vector<ll> a(n), pref(n+1,0);
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        pref[i+1] = a[i]+pref[i];
    }
    ll ans = 0;
    m[0]=1;
    for(ll i=1;i<=n;i++){
        if(m.count(pref[i]-x)){
            ans+= m[pref[i]-x];
            //cout<<pref[i]<<'\n';
        }
        m[pref[i]]++;
    }
    cout<<ans<<'\n';


    return 0;
}
