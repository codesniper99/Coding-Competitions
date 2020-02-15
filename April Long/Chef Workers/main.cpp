//SOOOOOLLLVEDDDDDD :D
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
     vector<ll>coins(n);
     for(ll i=0;i<n;i++)
                    cin>>coins[i];
     vector<ll>types(n);
     vector<ll>translators;
     vector<ll>authors;
     vector<ll>both;
     ll min_1=99999,min_2=999999,min_3=9999999;
     for(ll i=0;i<n;i++)
        {

            cin>>types[i];
            if(types[i]==1)
            {
               if(coins[i]<min_1)
                min_1=coins[i];
            }
            else if(types[i]==2)
            {

               if(coins[i]<min_2)
                min_2=coins[i];
            }
            else if(types[i]==3)
            {
               if(coins[i]<min_3)
                min_3=coins[i];
            }



        }
       cout<<min(min_1+min_2,min_3)<<'\n';
    return 0;
}
