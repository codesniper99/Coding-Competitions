//SOLVEDDDD :D

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
        vector<ll>price(n);
        vector<ll>quantity(n);
        vector<ll>discount(n);
        double loss=0.0;
        for(ll i=0;i<n;i++)
        {
            cin>>price[i]>>quantity[i]>>discount[i];
            }
            for(ll i=0;i<n;i++)
                loss+=((double)quantity[i]*(double)discount[i]*(double)discount[i]*(double)price[i]/10000);

        cout<<setprecision(20)<<loss<<'\n';


    }

    return 0;
}
