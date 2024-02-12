#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    vector<ll> diffs(n+1,0);
    for(ll i=0;i<k;i++){
        ll l,r;
        cin>>l>>r;
        diffs[l-1]++;
        diffs[r]--;
    }
    ll count  = diffs[0];
    vector<ll> hays(n,0);
    for(ll i=1;i<=n;i++){
        count+=diffs[i];
        hays[i-1] = count;
    }
    sort(hays.begin(), hays.end());
    cout<<hays[(n-1)/2]<<'\n';



    return 0;
}
