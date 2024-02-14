
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
    ll x,y;
    cin>>x>>y;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = 0;
    map<ll, map<ll,ll> > div_x;
    for(ll i=n-1;i>=0;i--){
        ll k = a[i]%x;
        ll need = (x-k)%x;
        //cout<<need<<"n";
        if(!div_x[need].empty()){
            // for(auto cand: div_x[need]){
            //     ll val = cand.first;
            //     ll cnt = cand.second;
            //     //cout<<val<<' ';
            //     if(a[i]%y == val%y){
            //         ans+=cand.second;
            //     }

            // }
            ans+= div_x[need][a[i]%y];
            //div_x[need][a[i]%y]++;
        } 
        //cout<<'\n';
        div_x[k][a[i]%y]++;
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