#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll fun(vector<ll> coins, ll m, ll V)
{
    ll table[V+1];

    table[0] = 0;

    for (ll i=1; i<=V; i++)
        table[i] = LONG_LONG_MAX;

    for (ll i=1; i<=V; i++)
    {
        for (ll j=0; j<m; j++)
          if (coins[j] <= i)
          {
              ll sub_res = table[i-coins[j]];
              if (sub_res != LONG_LONG_MAX && sub_res + 1 < table[i])
                  table[i] = sub_res + 1;
          }
    }
    return table[V];
}
int main()
{
    ios::sync_with_stdio(0);
    ll n;
    ll k;
    cin>>n>>k;
    vector<ll>a(k);
    for(ll i=0;i<k;i++)
        cin>>a[i];
    ll maxi=0;
    ll mini=0;
    sort(a.begin(),a.end());

    ll sum=0;
    mini=fun(a,n,k);
    ll i=0;
    maxi=k/a[i];
   // while(sum!=k)
    {
        ll diff=k-sum;
        if(a[i+1]>diff)
        {
            sum-=a[i];
            maxi--;
            i++;
        }
        else
        {
          sum+=a[i];
          maxi++;
        }

    }
cout<<maxi<<' '<<mini<<'\n';

    return 0;
}
