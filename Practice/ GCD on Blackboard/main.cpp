#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    vector<ll> leftgcd(n+2,0);
    vector<ll> rightgcd(n+2,0);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }

    leftgcd[0] = 0;
    for(ll i=1;i<=n;i++){
        leftgcd[i] = __gcd(a[i], leftgcd[i-1]);
    }

    rightgcd[n+1] = 0;
    for(ll i=n;i>=1;i--){
        rightgcd[i] = __gcd(a[i], rightgcd[i+1]);
    }
    ll maxx = 0;
    for(ll i=1;i<=n;i++){
        maxx = max(maxx, __gcd(leftgcd[i-1], rightgcd[i+1]));
    }

    cout<<maxx<<'\n';


    return 0;
}
