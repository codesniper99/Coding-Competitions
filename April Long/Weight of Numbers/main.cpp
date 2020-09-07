//SOLVEDDDDDDDDDDDDDD :DDDDDD
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll power_expo(ll x, unsigned ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
       if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,w;
        cin>>n>>w;

        if(w>=9 || w<=-10)
            cout<<'0'<<'\n';
        else
            {
                if(w>=0){
                unsigned ll answer= (power_expo(10,n-2,1000000007) * ((9-w)%1000000007))%1000000007;
                cout<<answer<<'\n';
                }
                else if(w<0)
                {
                    if(w!=-9){w=-w;
                     unsigned ll answer= (power_expo(10,n-2,1000000007) * ((10-w)%1000000007))%1000000007;
                cout<<answer<<'\n';}
                else
                {
                    cout<<power_expo(10,n-2,1000000007)<<'\n';;
                }


                }
            }
    }

    return 0;
}
