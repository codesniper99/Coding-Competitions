
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
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll k = sum/n;
    ll cur = 0;
    ll flag=1;
    for(ll i=0;i<n;i++){
        if((cur+a[i]) - k*(i)<k){
            flag = 0;
            break;
        } else {
            cur+=a[i];
        }
    }
    if(!flag){
        cout<<"NO\n";

    } else {
        cout<<"YES\n";
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