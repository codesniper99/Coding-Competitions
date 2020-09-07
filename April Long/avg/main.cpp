//SOLVEDDDDDDDD :D
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      	ll n,mini=9999,maxi=0;
        cin>>n;

        ll arr[9999]={0};
        for(ll i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;

            temp+=999;

            if(temp>maxi)
                maxi=temp;

            if(temp<mini)
                mini=temp;
            arr[temp]++;
        }
        ll counter = 0;
        for(ll i=mini;i<=maxi;i++)
        {
            for(ll j=i;j<=maxi;j++)
            {
                if(i!=j)
                {
                    if((i+j)%2==0 && arr[i] && arr[j] && arr[(i+j)/2])
                    {
                        counter+=(arr[i]*arr[j]);
                    }
                }
                else
                    counter=counter + (arr[i]*(arr[i]-1))/2;
            }
        }
        cout<<counter<<'\n';
    }
}
