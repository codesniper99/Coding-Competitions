#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll fun(vector<ll> arr, ll n)
{
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
        m[arr[i]]++;

   ll counte = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
            {

            double x=double(arr[i]+arr[j]);
            double z=2.0;
            double y=x/z;

            if(floor(y)==y)
             if ( m[(arr[i] + arr[j])/2] > 0 && i<j )
             {
                  counte++;
             }


        }
    }
    return counte;
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
   {

    ll n ;
    cin>>n;
    vector<ll>arr(n);

    for(ll i=0;i<n;i++)
        cin>>arr[i];

    cout << fun(arr, n)<<'\n';

   }
    return 0;
}
