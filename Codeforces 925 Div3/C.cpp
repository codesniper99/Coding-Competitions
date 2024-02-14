
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
    vector<ll> freq(n+1,0);
    pair<ll, ll> mx(0ll, 0ll);

    for(ll i=0;i<n;i++){
        cin>>a[i];
        
    }
    ll pref = 1;
    ll x = 1;
    while(x<n && a[x] == a[0]){
        x++;
        pref++;
    }
    ll suf = 1;
    ll y = n-2;
    while(y>=0 && a[y] == a[n-1]){
        y--;
        suf++;
    }
    ll rem =max(pref, suf);
    if(a[0] == a[n-1]){
        if(pref+suf<n)
            rem = pref+suf;
        else {
            rem = n;
        }
    }
    cout<< n - rem <<'\n';

}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}