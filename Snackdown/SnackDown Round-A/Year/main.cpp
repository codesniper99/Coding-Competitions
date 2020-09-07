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
        if(n==2010||n==2015||n==2016||n==2017||n==2019)
            cout<<"HOSTED\n";
        else
            cout<<"NOT HOSTED\n";
    }


    return 0;
}
