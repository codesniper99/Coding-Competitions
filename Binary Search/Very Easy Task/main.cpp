#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,x,y;
    cin>>n>>x>>y;

    ll l = 0, r = max(x,y)*(n-1);
    ll ans = min(x,y);
    while(l<r){
        ll m = l +(r-l)/2;
        ll copies = floor(m/x) + floor(m/y);
        if(copies>=n-1){
            r = m;
        } else {
            l = m+1;
        }

    }
    cout<< l+ans<<'\n';


    return 0;
}
