#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,k;
    cin>>n;
    vector<ll> a(n);
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    cin>>k;
    while(k--){
        ll l,r;
        cin>>l>>r;
        ll u = (upper_bound(a.begin(), a.end(), r)-a.begin());
        ll lo = (lower_bound(a.begin(), a.end(), l)-a.begin());
        //cout<<u <<' '<<lo<<'\n';
       cout<< u - lo<<'\n';

    }




    return 0;
}
