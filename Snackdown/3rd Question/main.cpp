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
       ll days=0;
       ll left=n-1;
       for(ll i=0;i<n;i++)
        cin>>a[i];
       ll lower=1;

       ll capacity=a[0];
         // cout<<capacity<<" "<<lower<<" "<<left<<" "<<days<<'\n';

       while(left>0)
       {
           left-=capacity;
           if(left<=0)
             {
                  days++;

                 break;
              }

           for(ll i=lower;i<n-left;i++)
           {
              capacity+=a[i];

           }

           lower=n-left;
           days++;

          //cout<<capacity<<" "<<lower<<" "<<left<<" "<<days<<'\n';

          }
       cout<<days<<'\n';
   }



    return 0;
}
