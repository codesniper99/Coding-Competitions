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
        ll m, k, a1, ak;
        cin>>m>>k>>a1>>ak;

        ll frac = m%k;
        ll to_buy = max(0LL, frac-a1);
        a1-= min(a1, frac);
        ll ans = 0;
        ans+=to_buy;

        ll divpart = m/k;
        ll buy_k = max(0LL, divpart-ak - a1/k);
        ans+=buy_k;
        cout<<ans<<'\n';
    }


    return 0;
}
