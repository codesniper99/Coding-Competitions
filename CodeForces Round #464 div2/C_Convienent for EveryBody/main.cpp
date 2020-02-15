#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> people(n);
    for(ll i=0;i<n;i++)
       cin>>people[i];
    ll s,f;
cin>>s>>f;
    vector<ll>timezones(n);
    ll number=-1;
    ll time=0;
    for(ll i=1;i<=n;i++)
    { ll peoples=0;

        for(ll j=0;j<n;j++)
        {
            timezones[j]=(i+j)%n;
            if(timezones[j]==0)
                timezones[j]=n;

         if(timezones[j]>=s &&timezones[j]<f)
            peoples+=people[j];



        }

        if(peoples>number)
        {
            number=peoples;time=i;
        }
    }

              cout<<time  <<'\n';
    return 0;
}
