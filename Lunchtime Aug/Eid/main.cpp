#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#define ll long long int
#define li long int

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        vector<ll>a;
        for(ll i=0;i<n;i++)
            {ll x;
             cin>>x;
             a.push_back(x);}

        ll ta=0,tb=0;
        sort(a.begin(),a.end());
        ll diff=1000000;
        for(ll i=0;i<n-1;i++)
        {
            if(((a[i+1]-a[i])<=diff))
            {
                diff=a[i+1]-a[i];

            }

        }
        cout<<diff<<'\n';
    }


    return 0;
}
