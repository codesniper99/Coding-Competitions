#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long int
#define li long int

using namespace std;

 long long int mini(ll start,ll endy, vector <ll> a)
{
    ll mint=a[start];

    for(ll i=start;i<=endy;i++)
    {
        if(a[i]<=mint)
            mint=a[i];
    }

    return mint;
}

ll yoyo(ll start,ll endy, vector<ll> a)
{
    ll mint=0;
    if(start==endy)
        return a[start];
    for(ll i=start;i<=endy;i++)
    {
        mint^=a[i];
    }

    return mint;
}


int main()
{
    ios::sync_with_stdio(0);

      ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];

   ll p=n*(n+1)/2;

    vector<ll>ans(p);
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
//cout<<mini(i,j,a)<<"       "<<yoyo(i,j,a)<<"\n";
           ans[c] = yoyo(i,j,a) * mini(i,j,a);
        c++;
        }

    }
    sort(ans.begin(),ans.end());
    cout<<ans[k-1]<<'\n';

    return 0;
}
