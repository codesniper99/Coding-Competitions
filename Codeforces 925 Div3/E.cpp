
#include<bits/stdc++.h>
#define ll long long int
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

ll digits(ll x){
    ll t = x, cnt = 0;
    while(t){
        t/=10;
        cnt++;
    }
    return cnt;
}
void solve(){
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<ll> a(n);
    vector<pair<ll,ll> > zeros;
    vector<ll> bigs;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        ll cnt = 0;
        ll x =a[i];
        while(x%10 == 0){
            cnt++;
            x=x/10;
        }
        if(cnt>0)
            zeros.push_back({cnt,a[i]});
        else 
            bigs.push_back(a[i]);
    }
    sort(zeros.begin(), zeros.end(), greater<int>());
    sort(bigs.begin(), bigs.end(), greater<int>());
    ll sz = zeros.size();
    if(sz<1){
        ll ans = 0, bsz = bigs.size();
        for(ll i=0;i<bsz; i++){
            ans+= digits(bigs[i]);

        }
        cout<<ans<<'\n';
    } else if (sz <3){
        ll ans = 0, bsz = bigs.size();
        for(ll i=0;i<bsz; i++){
            ans+= digits(bigs[i]);

        }
        ans += digits(zeros[1].second);
        cout<<ans<<'\n';

    } else {
        ll ans = 0, bsz = bigs.size();
        for(ll i=0;i<bsz; i++){
            ans+= digits(bigs[i]);

        }
        for(ll i=0;i<sz;i+=3){
            ans+=digits(zeros[i+1].second);
            ans+=digits(zeros[i+2].second);
            
        }
        cout<<ans<<'\n';

    }

    

    
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}