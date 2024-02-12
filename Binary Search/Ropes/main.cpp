#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll cnt(double len, vector<ll> &a){
    ll sum = 0;
    for(auto lens: a){
        sum+=floor(lens/len);

    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];

    double l = 0, r = 1e8;

    for(ll i=1;i<100;i++){
        double m = l + (r-l)/(double)2;

        if(cnt(m, a) < k){
            r = m;
        } else {
            l = m;
        }

    }
    cout<<setprecision(20)<<l<<'\n';


    return 0;
}
