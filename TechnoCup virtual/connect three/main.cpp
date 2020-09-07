#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    //line
    map<pair<ll,ll> ,ll> m;
    m[make_pair(x1,y1)]=1;
    m[make_pair(x2,y2)]=1;
    m[make_pair(x3,y3)]=1;
    ll ans=3;
    for(ll i=x1;i<=x2;i++)
    {
        ll e1=(((y2-y1)/(x2-x1))*(i-x1))+y1;
        if(m[make_pair(i,e1)]!=1)
        {
            ans++;
            m[make_pair(i,e1)]=1;

            cout<<i<<","<<e1<<'\n';
        }
        else
        {
            ;
        }
    }
     for(ll i=y1;i<=y2;i++)
    {
        ll e1=(((x2-x1)/(y2-y1))*(i-y1))+x1;
        if(m[make_pair(e1,i)]!=1)
        {
            ans++;
            m[make_pair(e1,i)]=1;

            cout<<e1<<","<<i<<'\n';
        }
        else
        {
            ;
        }
    }

    for(ll i=x2;i<=x3;i++)
    {
        ll e1=(((y3-y2)/(x3-x2))*(i-x2))+y2;
        if(m[make_pair(i,e1)]!=1)
        {
            ans++;
            m[make_pair(i,e1)]=1;

            cout<<i<<","<<e1<<'\n';
        }
        else
        {
            ;
        }
    }

   for(ll i=y2;i<=y3;i++)
    {
        ll e1=(((x3-x2)/(y3-y2))*(i-y2))+x2;
        if(m[make_pair(e1,i)]!=1)
        {
            ans++;
            m[make_pair(e1,i)]=1;

            cout<<e1<<","<<i<<'\n';
        }
        else
        {
            ;
        }
    }

    for(ll i=x1;i<=x3;i++)
    {
        ll e1=(((y3-y1)/(x3-x1))*(i-x1))+y1;
        if(m[make_pair(i,e1)]!=1)
        {
            ans++;
            m[make_pair(i,e1)]=1;

            cout<<i<<","<<e1<<'\n';
        }
        else
        {
            ;
        }
    }
         for(ll i=y1;i<=y3;i++)
    {
        ll e1=(((x3-x1)/(y3-y1))*(i-y1))+x1;
        if(m[make_pair(e1,i)]!=1)
        {
            ans++;
            m[make_pair(e1,i)]=1;
            cout<<e1<<","<<i<<'\n';
        }
        else
        {
            ;
        }
    }

    cout<<ans;
    return 0;
}
