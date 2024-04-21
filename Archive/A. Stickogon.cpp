#include<bits/stdc++.h>

#define ll long long int
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(){
    ll n;
    cin>>n;
    map<ll,ll> m;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    for(auto const &[key, val]: m){
        if(val>=3 ){
            ans+=val/3;
        }
    }
    cout<<ans<<'\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
