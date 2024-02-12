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
        string s;
        cin>>s;
        vector<ll> a(n,0), pref(n+1,0);
        pref[0] = 0;
        for(ll i=0;i<n;i++){
            a[i] = s[i]-'0';
            pref[i+1] = a[i]+pref[i];

        }
        ll ans = 0;
        map<ll,ll> m;
        m[0] = 1;
        for(ll i=1;i<=n;i++){
            if(m.count(pref[i] - i)){
                ans+=m[pref[i]-i];
            }
            m[pref[i]-i]++;
        }
        cout<<ans<<'\n';


    }


    return 0;
}
