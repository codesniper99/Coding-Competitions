//Partial
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
        vector< pair<ll,ll> > v(n);
        for(ll i=0;i<n;i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        ll q;
        cin>>q;
        for(ll i=0;i<q;i++)
        {
            ll m;
            cin>>m;
            vector<ll> a(m);
            for(ll j=0;j<m;j++)
                cin>>a[j];

            ll good=0;

            for(ll k=0;k<n;k++)
            {
                ll points=0;
                for(ll b=0;b<m;b++)
                {
                    if( a[b]>=v[k].first && a[b]<=v[k].second )
                    {
                        points++;
                    }

                }
                if(points%2==1)
                    good++;

            }
            cout<<good<<'\n';
        }



    }

    return 0;
}
