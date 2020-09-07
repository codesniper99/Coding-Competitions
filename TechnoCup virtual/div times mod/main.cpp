//solved
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    map<ll,ll> factors;
    factors.clear();
    for(ll i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
         {
             factors[i]=1;
             factors[n/i]=1;

         }
    }
    ll y=sqrt(n);
    ll pos;
    //cout<<factors[1]<<factors[2]<<factors[3]<<factors[4]<<factors[6]<<"k";
    double x=sqrt(n);
    if(y-x == 0.0)
        factors[sqrt(n)]=1;
    ll flag=0;


    if(n<k)
        cout<<n+k<<'\n';
    else
    {
        ll n2;
        for(ll i=k-1 ;i>=1;i--)
        {
            if(factors[i]==1)
            {
               n2=i;
               break;
            }


        }
        ll ans;

        ll n1 = n/n2;
        ll left= n1*k;
        ll right= (n1+1)*(k);
        for(ll i=left;i<=right;i++)
        {
            if(i%k == n2)
            {
                ans=i;
                break;
            }

        }
        cout<<ans<<'\n';
    }


    return 0;
}
