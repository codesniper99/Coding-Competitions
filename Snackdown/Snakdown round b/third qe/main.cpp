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

        ll n,m,k,l;
        cin>>n>>m>>k>>l;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        vector<ll>ppl(n+1);
        ppl[0]=0;
        vector<ll>arra(n);
        arra.clear();

        for(ll i=1;i<=n;i++)
        {
          ppl[i]=a[i]-a[i-1];
          arra[i-1]=ppl[i];
          cout<<arra[i-1]<<'\n';
        }
        sort(arra.begin(),arra.end());

        for(ll i=0;i<n;i++)
        {
            arra[i]-=l;

        }
        for(ll i=0;i<n-1;i++)
        {

            arra[i+1]=arra[i]+arra[i+1];
        }
        sort(arra.begin(),arra.end());
        ll maxi= arra[n-2];
        cout<<maxi<<'\n';
        if(arra[n-2] > 0)
        {
            cout<< m*l-maxi<<'\n';

        }
        else
        {
            cout<<m*l + l - (k-l)<<'\n';
        }




    }
    return 0;
}
