#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    vector<ll> x(n);
    for(ll i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    vector<ll>maxi(n);
    for(ll i=0;i<n;i++)
    {
        maxi[i]=(n-i)*x[i];
    }
    sort(maxi.begin(),maxi.end());
    cout<<maxi[n-1];


    return 0;
}
