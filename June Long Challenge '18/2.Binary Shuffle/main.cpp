#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll fun(ll n)
{ll ans=0;
    for (ll i = 61; i >= 0; i--) {
        ll k = n >> i;
        if (k & 1)
            ans++;
        else
            ;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--){
    ll a,b;
    cin>>a>>b;
   ll n1a=fun(a);
   ll n1b=fun(b);
    if(n1a>n1b)
    {
        cout<<"-1\n";continue;
    }
    else if(n1a==n1b)
    {
        cout<<n1b-n1a+1<<'\n';
    continue;
    }
    else
    {
        cout<<n1b-n1a<<'\n';continue;
    }

    }

    return 0;
}
