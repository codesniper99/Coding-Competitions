#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll monsters[1000000];

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
     cin>>monsters[i];

    ll q;
    cin >> q;

    ll living=n;

    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        for(ll i=0;i<n;i++)
        {
            if(monsters[i]!=0)
               if((i&x) == (i) )
                {
                     monsters[i]=monsters[i]-y;
                     if(monsters[i]<=0)
                     {
                      monsters[i]=0;
                      living--;
                     }
                }

        }
        cout<<living<<'\n';
    }

    return 0;
}
