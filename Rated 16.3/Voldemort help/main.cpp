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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll res=0;
    for( ll i=0;i<n-1;i++)
    {
        res+=a[i]*a[i+1];

    }
    cout<<res<<'\n';

    return 0;
}
