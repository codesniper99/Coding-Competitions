//SOLVEDDD :D
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
        map<ll,ll>exists;

        for(ll i=0;i<n;i++)
        {

            cin>>a[i];
            exists[a[i]]=1;

        }
        ll flag=0;

        for(ll i=0;i<n;i++)
        {
            if(exists[a[i]] && exists[i+1])
            {
                exists[a[i]]++;
            }

            if(exists[a[i]]>=3 && exists[i+1])
            {
               // cout<<i<<"\n";
                flag=1;
                break;
            }
        }

        if(flag)
            cout<<"Truly Happy\n";
        else
            cout<<"Poor Chef\n";

    }



    return 0;
}
