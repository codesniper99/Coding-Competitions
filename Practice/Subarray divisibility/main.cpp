#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    //cout<<-127%4<<'\n';
    vector<ll> a(n), pref(n+1,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        pref[i+1] = ((a[i]+pref[i])%n+n)%n;
        //cout<<pref[i]<<' ';
    }
    ll ans = 0;
    map<ll,ll> m;
    m[0] = 1;
    for(ll i=1;i<=n;i++){
        if(m.count(pref[i])){
            ans+=m[pref[i]];
        }
        m[pref[i]]++;

    }
    cout<<ans<<'\n';


    return 0;
}
