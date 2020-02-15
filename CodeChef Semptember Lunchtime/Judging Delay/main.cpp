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
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        ll total=0;
        for(ll i=0;i<n;i++)
        {

            cin>>a[i];
            cin>>b[i];
            if((b[i]-a[i])>5)
                total++;
        }
        cout<<total<<'\n';



    }


    return 0;
}
