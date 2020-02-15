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

        while(indice<=n-1)
        {

            if(a[indice]<=k)
                indice++;
            else
            {
                break;


            }



        }

        if((indice==n-1)||(indice==n))
        {

            ll answer=0;

          for(ll i=0;i<n;i++)
          {
              answer+=a[i];
          }
          cout<<answer<<'\n';
          continue;
        }
       else
       {
           ll sum=0;
           for(ll i=indice;i<=n-3;i++)
           {
               sum+=a[i]-k;


           }
           if(sum>=a[n-2]-k)
           {
               sum+=a[n-2]-k;
               if(sum%2==1)
               {

                   for(ll i=indice;i<=n-2;i++)
                   {
                       a[i]=k;


                   }
                   a[n-1]--;

          ll answer=0;

          for(ll i=0;i<n;i++)
          {
              answer+=a[i];
          }
          cout<<answer<<'\n';
          continue;
               }

               else
               {
                    for(ll i=indice;i<=n-2;i++)
                   {
                       a[i]=k;
                   }

          ll answer=0;

          for(ll i=0;i<n;i++)
          {
              answer+=a[i];
          }
          cout<<answer<<'\n';
          continue;

           }

       }
       else
       {
           for(ll i=indice;i<=n-3;i++)
           {

               a[i]=k;
           }
           a[n-2]-=sum;
           ll x=a[n-2]-k;
           a[n-2]=k;
           a[n-1]-=x;

          ll answer=0;

          for(ll i=0;i<n;i++)
          {
              answer+=a[i];
          }
          cout<<answer<<'\n';
          continue;
       }


    }
    }

    return 0;
}
