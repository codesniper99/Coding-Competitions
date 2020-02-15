#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

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
        ll n,m;
        cin>>n>>m;
        vector<ll>d(n);
        vector<ll>a(m);
        vector<ll>b(m);
        for(ll i=0;i<n;i++)
        {

            cin>>d[i];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
                cin>>a[j];

        }

        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
                cin>>b[j];

        }




    }


    return 0;
}
