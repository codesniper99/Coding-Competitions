//SOLVEDD :D
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
         vector<ll>l(n);
         vector<ll>g(n);
         for(ll i=0;i<n;i++)
            cin>>l[i];
         for(ll i=0;i<n;i++)
            cin>>g[i];

         int frontt=0,backk=0;
         for(ll i=0;i<n;i++)
         {
             if(l[i]<=g[i])
                continue;
             else{frontt=1;break;}

         }

         for(ll i=0;i<n;i++)
         {
             if(l[i]<=g[n-i-1])
                continue;
             else{backk=1;break;}

         }
         if(frontt==0&&backk==0)
         {
             cout<<"both\n";
         }
         else if(frontt==1&&backk==0)
         {
             cout<<"back\n";
         }
         else if(frontt==0&&backk==1)
         {
             cout<<"front\n";
         }
         else cout<<"none\n";


     }

    return 0;
}
