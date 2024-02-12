#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
// AAA
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k,H;
        cin>>n>>m>>k>>H;
        vector<ll>h(n), diff(n,0);
        ll ans = 0;
        for(ll i=0;i<n;i++){
            cin>>h[i];
            diff[i] = abs(H-h[i]);
            if(diff[i]%k == 0){
                ll mul = diff[i]/k;
                if(mul<=m-1 && mul>0){
                    ans++;
                }
            }
        }
        cout<<ans<<'\n';



    }


    return 0;
}
