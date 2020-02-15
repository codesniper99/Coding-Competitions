//
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
 vector<pair<ll,ll> >dp(26);
        dp[1].first=1;dp[1].second=2;
        dp[2].first=1;dp[2].second=4;
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll pos=3;
        while(pos<=n)
        {

            dp[pos].first=dp[pos-1].first*dp[pos-2].second + dp[pos-1].second*dp[pos-2].first;
            dp[pos].second=dp[pos-1].second*dp[pos-2].second*2;
           ll a=dp[pos].first,b=dp[pos].second;

        ll ans1=a/(__gcd(a,b));
        ll ans2=b/(__gcd(a,b));
        dp[pos].first=ans1;
        dp[pos].second=ans2;
            pos++;

        }

        ll x=dp[n].first,y=dp[n].second;
        //cout<<'\n'<<x<<" "<<y<<'\n';
        ll ans1=x/(__gcd(x,y));
        ll ans2=y/(__gcd(x,y));
        cout<<ans1<<" "<<ans2<<" ";


    }

    return 0;
}
