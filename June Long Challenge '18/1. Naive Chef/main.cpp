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
        map<ll,ll>m;
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll>num(n);
        for(ll i=0;i<n;i++){
                cin>>num[i];
                m[num[i]]++;
        }
        double pa,pb;
        pa=(double)m[a]/(double)n;
        pb=(double)m[b]/(double)n;
        cout<<fixed<<setprecision(10)<<pa*pb<<'\n';
    }

    return 0;
}
