// SOLVEDD
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
       ll n,u,d;
       cin>>n>>u>>d;
       vector<ll>h(n);
       for(ll i=0;i<n;i++)
        cin>>h[i];

       ll max_index=1;
       ll used_para=0;
       for(ll i=0;i<n-1;i++)
       {
           if(h[i]==h[i+1])
           {
               max_index++;
               continue;

           }
           else if(h[i+1]-h[i]<=u &&( h[i+1]-h[i])>0)
           {
               max_index++;
               continue;

           }
           else if(h[i]>h[i+1]&&( h[i+1]-h[i])<0)
           {

               if(h[i]-h[i+1] <=d)
               {
                   max_index++;
                   continue;
               }
               else if(used_para==0)
               {
                   max_index++;
                   used_para=1;
                   continue;
               }
               else
                break;

           }
           else
            break;



       }

       cout<<max_index<<'\n';

   }

    return 0;
}
