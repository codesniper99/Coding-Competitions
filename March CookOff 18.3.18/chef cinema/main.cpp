//SOLVED
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
        ll x;
        cin>>x;
        if(x==0)
            cout<<'0'<<'\n';
        else if(x==1)
            cout<<'1'<<'\n';
        else
        {
            ll prev=1,pres=3;
            ll time=1;
            ll i=3;
            ll counte=1;
            while(pres<x)
            {
                prev=pres;
                pres=i*(i+1)/2;
                i++;
                counte++;
            }
            if(x==pres)
                counte++;
           else if(x>(prev+pres)/2)
            {
                counte+=pres-x+1;
            }
            else if(x==(prev+pres)/2)
            {
                counte+=x-prev;
            }
            else
            {
                counte+=x-prev;
            }
            cout<<counte<<'\n';



        }



    }


    return 0;
}
