#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }

    if(n==1)
    {
     if(m>=a[0])
     {
         cout<<"0\n";
     }
     else
     {
         cout<<((a[0]-m)*b[0])<<'\n';
     }


    }
    else{
    vector<pair<ll,ll> >p(n);
    ll total=0;
    for(ll i=0;i<n;i++)
    {
        ll x=a[i]*b[i];

        total+=x;
        p[i].first=x;
        p[i].second=b[i];

    }
    if(m>=total)
    {
        cout<<"0\n";return 0;
    }

        sort(p.begin(),p.end());

    while(m > 0 && p[n-1].first>0)
    {
      //cout<<" P = "<<p[n-2].first<<"  "<<p[n-1].first<<" "<<m<<'\n';
        ll difference = p[n-1].first-p[n-2].first;

        if(difference !=0)
        {
        ll count = difference/(p[n-1].second);
        if(count *(p[n-1].second) != difference)
            count=count+1;

        p[n-1].first = p[n-1].first - (count * p[n-1].second);
        m = m - count;
        }
        else
        {
            p[n-1].first=p[n-1].first-p[n-1].second;
            m=m-1;
        }

        sort(p.begin(),p.end());

    }

    sort(p.begin(),p.end());
      //cout<<" P = "<<p[n-2].first<<"  "<<p[n-1].first<<" "<<m<<'\n';

    cout<<p[n-1].first<<'\n';

    }
    return 0;
}
