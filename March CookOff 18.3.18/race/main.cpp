//Solved

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
       ll n;
       cin>>n;
       vector<ll>a(n);
       vector<ll>b(n);
       for(ll i=0;i<n;i++)
        cin>>a[i];
       sort(a.begin(),a.end());

       for(ll i=0;i<n;i++)
        cin>>b[i];
       sort(b.begin(),b.end());

       a[n-1]=0;
       b[n-1]=0;
       ll sum_a=0;
       for(ll i=0;i<n;i++)
        sum_a+=a[i];

       ll sum_b=0;
       for(ll i=0;i<n;i++)
        sum_b+=b[i];

       if(sum_a==sum_b)
       cout<<"Draw\n";
       else if(sum_a>sum_b)
        cout<<"Bob\n";
       else
        cout<<"Alice\n";

   }

    return 0;
}
