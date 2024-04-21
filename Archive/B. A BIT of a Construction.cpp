#include<bits/stdc++.h>

#define ll long long int
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<k<<'\n';
        return;
    }
    vector<ll>bitrep;
    ll tmp = k;
    while(tmp){
        bitrep.push_back(tmp%2);
        tmp/=2;
    }
    // # reverse oorder
    reverse(bitrep.begin(), bitrep.end());
    int sz= bitrep.size();
    ll remainder = k;
    vector<ll> ans;
    ans.clear();
    // for(int i=0;i<sz;i++){
        // cout<<sz<<'\n';
        if(n-ans.size() >= 2){
            ans.push_back(pow(2,sz-1)-1);
            remainder -= pow(2,sz-1)-1;
        }
        else{
            ans.push_back(remainder);
            remainder=0;
        }
        ans.push_back(remainder);
        remainder=0;
        for(int i=0;i<n-2;i++){
            ans.push_back(0);
        }
    
        
    // }
    for(auto const &x: ans){
        cout<<x<<' ';

    }
    cout<<'\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
