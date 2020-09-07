#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        cin>>n>>k;
        vector<ll>h(n);
        vector<ll>diff(n);
        for(ll i=0;i<n;i++)
        {
            cin>>h[i];
            if(i!=0)
            diff[i]=h[i]-h[i-1];
            else
                diff[0]=h[0];
        }
        ll answer=0;
        for(ll i=0;i<n;i++)
        {
            while(diff[i]>k)
            {
                answer++;
                diff[i]-=k;
            }



        }
        cout<<answer<<'\n';
    }

    return 0;
}
