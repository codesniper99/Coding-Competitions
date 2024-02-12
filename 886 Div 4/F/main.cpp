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
        vector<ll> cnt(n+1,0);
ll x;
        for(ll i=0;i<n;i++){
            cin>>x;
            if(x<=n){
                cnt[x]++;
            }
        }
        ll ans = 0;
        vector<ll> mx(n+1,0);
        for(ll i=1;i<=n;i++){

            for(ll j=i;j<=n;j+=i){

                mx[j]+=cnt[i];
                ans = max(ans, mx[j]);
            }
        }
        cout<<ans<<'\n';
    }


    return 0;
}
