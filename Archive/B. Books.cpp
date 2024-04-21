#include<bits/stdc++.h>

#define ll long long int
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

ll books(int i,ll t, vector<int>&a, vector<int>&pref){
    int n = a.size();
    
    int ans = 0;

    int endp = i-1;
    ll low=i, hi=n, mid;
    while(low<hi){
        mid = low + (hi-low)/2;
        if(pref[mid+1] - pref[i] > t){
            hi = mid;
        }
        else {
            low = 1+ mid;
        }

    }
    if (low-1 >=0 && pref[low-1]-pref[i] <= t){
        ans = low-1 - i +1;
    }

    return max(ans, 0);
}

void solve(){
    ll n,t;
    cin>>n>>t;
    vector<int>a(n);
    vector<int>pref(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        pref[i+1] = a[i] + pref[i];   
    }
    ll maxx = 0;
    for(int i=0;i<n;i++){
        maxx = max(books(i,t,a, pref), maxx);
    }
    cout<<maxx<<'\n';
}

int main() {

    ios::sync_with_stdio(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
