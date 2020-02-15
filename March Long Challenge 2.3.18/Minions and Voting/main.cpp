#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

struct minion{
ll value;
ll left;
ll right;
};
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        vector<ll>sum(n);
        sum[0]=a[0];
        ll carry=a[0];
        for(ll i=1;i<n;i++)
        {
            sum[i]=carry+a[i];
            carry+=a[i];
        }

        vector<ll> votes(n);
        for(ll i=0;i<n;i++)
            votes[i]=0;

        for(ll i=0;i<n;i++)
        {
            ll left = 0;
            ll right = i;
            ll mid = (left+right)/2;
            ll lower=0;
            ll upper=n-1;
            while(left<=right)
            {
                if()



            }



        }

    }

    return 0;
}
