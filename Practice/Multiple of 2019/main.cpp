#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define MOD 2019
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    ll n= s.size();
    vector<ll> suf(n+1,0);
    ll pw = 1;
    suf[n] = 0;
    map<ll,ll> m;
    ll ans = 0;
    m[0]++;
    for(ll i=n-1;i>=0;i--){
        int dig = s[i]-'0';
        suf[i] = (dig*pw + suf[i+1])%MOD;
        pw = (pw*10)%MOD;
        ans+=m[suf[i]];
        m[suf[i]]++;
    }
    cout<<ans<<'\n';


    return 0;
}
