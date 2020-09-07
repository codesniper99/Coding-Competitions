
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
     ios::sync_with_stdio(0);
     ll n;
     cin>>n;
     vector<ll>a(n);
     for(ll i=0;i<n;i++)
      cin>>a[i];

     int flag=1;
     ll z,b,c,d;
     for(ll i=0;i<n;i++)
     {
         z=a[i];
         b=a[z-1];
         c=a[b-1];
         d=a[c-1];
         if(z==d && i==c-1)
         {

             cout<<"YES\n";
             flag=0;
             break;
         }


     }
             if(flag==1)
                    cout<<"NO\n";
    return 0;
}
