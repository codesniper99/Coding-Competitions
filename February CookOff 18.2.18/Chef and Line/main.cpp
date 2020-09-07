// SOLVED

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
         ll n,k,b;
         cin>>n>>k>>b;

         vector<ll>a(n);
         vector<ll>c(n);

         for(ll i=0;i<n;i++)
            {
                cin>>a[i];
                c[i]=a[i]*k+b;
            }
         sort(a.begin(),a.end());
        sort(c.begin(),c.end());
         ll counter=0;
         ll maxi=-1;

ll upp=a[n-1];
ll down;
ll who=1;
ll what=a[n-1];
         for(ll i=n-2;i>=0;i--)
         {
                if(c[i]<=what)
                {
                    what =a[i];
                    who=0;
                    counter++;
                    continue;
                }




         }
         cout<<counter+1<<'\n';

     }

    return 0;
}
