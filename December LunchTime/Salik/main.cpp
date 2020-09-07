#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int


using namespace std;

ll power(ll x, unsigned ll y, ll p)
{
    ll res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}




int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,n;
        cin>>a>>n;
cout<<"\n\n\n"<<a<<'\n'<<n<<"\n";
        ll ans= power(a,n,9);
        if(ans==0)
            cout<<"9\n";
        else
            cout<<ans<<'\n';



    }

    return 0;
}
