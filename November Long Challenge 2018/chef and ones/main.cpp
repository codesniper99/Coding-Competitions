#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll n,q,k;
    cin>>n>>q>>k;
    vector<ll>a(n);
    ll dp[n+1];
    for(ll i=0;i<=n;i++)
        dp[i]=-1;

    for(ll i=0;i<n;i++)
    {

        cin>>a[i];
    }

    string s;
    s.clear();
    cin>>s;
    ll count=0;
    for(ll i=0;i<q;i++)
    {
        if(count>n)
            count=count%n;

        if(s[i]=='!')
        {
            count++;
            ll x=a[n-1];
            for(ll i=n-2;i>=0;i--)
            {
                a[i+1]=a[i];

            }
            a[0]=x;
            continue;
        }
        else
        {

        if( dp[count]==-1  )
        {
            ll maxi=-1;
            ll len=0;
            for(ll i=0;i<n;i++)
            {
                //cout<<a[i]<<' '<<len<<'\n';
                if(a[i]==('1'-'0'))
                    {
                        len++;
                        if(len>=maxi)
                            maxi=len;
                    }
                else
                {
                    len=0;
                }

            }
            if(maxi>=k)
                maxi=k;
        cout<<maxi<<'\n';
        dp[count]=maxi;
        }

      else
        cout<<dp[count]<<'\n';

      }


    }

    return 0;
}
