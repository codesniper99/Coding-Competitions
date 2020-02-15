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
        for(ll i=0;i<n;i++)
        {

            cin>>a[i];
        }
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        vector<pair<ll,ll> >b;
        b.push_back(make_pair(a[0],0));
        for(ll i=1;i<n;i++)
        {
            ll len=b.size();
            if(a[i]>=b[len-1].first)
            {
                b.push_back(make_pair(a[i],i));
            }
            else
                continue;

        }
        ll len = b.size();

        vector<ll>num(len-1);

        for(ll i=1;i<len-1;i++)
        {
            ll sum=0;
            for(ll j=b[i].second+1;j<b[i+1].second;j++)
            {
                if(a[j]>=b[i-1].first)
                {
                    sum++;

                }
            }
            num[i-1] = sum;

        }

        ll maxi=len;

        for(ll i=0;i<len-1;i++)
        {
           // cout<<"num - "<<num[i]<<"\n";
            if(num[i]>=maxi)
            {
                maxi=num[i];

            }

        }
        maxi=max(x,maxi);
        if(maxi==0)
            cout<<len<<'\n';
        else
            cout<<len-1+maxi<<'\n';




    }

    return 0;
}
