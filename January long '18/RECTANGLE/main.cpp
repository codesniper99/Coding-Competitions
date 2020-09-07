#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a==b && b==c && c==d)||(a == b && c == d && a!=d)||( a == c && b==d && a!=b)||( a==d && b==c && a != b))
                     cout<<"YES\n";

         else
            cout<<"NO\n";

    }
    return 0;
}
