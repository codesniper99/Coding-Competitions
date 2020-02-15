//SOLVEDDDDDDDDDD :D
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
        vector<ll>c(n);
        for(ll i=0;i<n;i++)
            cin>>c[i];

        ll counter=0;
        ll answer=0;
        sort(c.begin(),c.end());
        ll last=c[0];

        for(ll i=1;i<n;i++)
        {
           // cout<<c[i]<<' '<<last;
            if(c[i]==last)
            {
                counter++;
            }
            else
            {
                answer+=counter;
                counter=0;
                last=c[i];
            }
        }
        if(counter!=0)
            answer+=counter;
        counter=0;
        cout<<answer<<'\n';

    }

    return 0;
}
