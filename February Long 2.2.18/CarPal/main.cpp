//SOLVEDDDDDDDDDDDDDDDDDDD

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll> a(n);
       for(ll i=0;i<n;i++)
            cin>>a[i];
       double c,d,s;
       cin>>c>>d>>s;


       double delay=0.0;

       delay=a[0];

       for(ll i=0;i<n-1;i++)
       {
           double rate=a[i];

           double service_rate=a[i+1];

           if(service_rate<delay)
            {
             delay+=0;
            }

           else
          {
            delay=service_rate;
          }
     }



       cout<<fixed<<setprecision(9)<<double(delay)*(c-1)<<"\n";
    }


    return 0;
}
