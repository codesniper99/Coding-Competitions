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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        ll indice=0;
        ll flag=1;
        while(flag)
        {
            if(a[indice]>k)
            {
                flag=0;
                break;
            }
            else
                indice++;

        }

        ll x=indice;
        ll sum=0;
        for(ll i=x;i<n-1;i++)
        {
            sum+=a[i]-k;
            a[i]=k;
        }
        //cout<<sum<<" "<<sum%2<<' ';

        if(sum%2==1)
        {
          a[n-1]--;
          ll answer=0;
          for(ll i=0;i<n;i++)
          {
              answer+=a[i];
          }
          cout<<answer<<'\n';
        }
        else
        {
            ll answer=0;

          for(ll i=0;i<n;i++)
          {
              answer+=a[i];
          }
          cout<<answer<<'\n';
        }




    }


    return 0;
}
