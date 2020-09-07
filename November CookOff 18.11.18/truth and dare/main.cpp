// solved:DDDD
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
    while(t--){

        ll flag=0;
        ll tr,dr,ts,ds;
        cin>>tr;
        map<ll,ll>atr;
        for(ll i=0;i<tr;i++)
        {
            ll x;
            cin>>x;

            atr[x]=1;
        }
        cin>>dr;
        map<ll,ll>adr;
        for(ll i=0;i<dr;i++)
        {
            ll x;
            cin>>x;
            adr[x]=1;
        }

        cin>>ts;
        vector<ll>ats(ts);
        for(ll i=0;i<ts;i++)
        {

            cin>>ats[i];
            if(atr[ats[i]]!=1)
            {
                flag=1;

            }
        }cin>>ds;
        vector<ll>ads(ds);
        for(ll i=0;i<ds;i++)
        {

            cin>>ads[i];
        if(adr[ads[i]]!=1)
            {
                flag=1;

            }
        }

        if(flag)
            cout<<"no\n";
        else
            cout<<"yes\n";


    }

    return 0;
}
