
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
    string ans="";
    ans+=char(int('a')+min(26ll, n-2)-1);
    n-=min(26ll, n-2);
    ans+=char(int('a')+min(26ll, n-1)-1);
    n-= min(26ll, n-1);
    ans+=char(int('a')+min(26ll, n)-1);
    reverse(ans.begin(), ans.end());
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