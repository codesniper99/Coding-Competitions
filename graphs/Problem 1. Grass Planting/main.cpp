#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    freopen("planting.in", "r", stdin);
    ll n;
    cin>>n;
    vector<ll> degree(n,0);

    for(ll i=0;i<n-1;i++){
        ll u,v;

        cin>>u>>v;
        u--,v--;
        degree[u]++;
        degree[v]++;
    }


    freopen("planting.out", "w", stdout);
    cout<<*max_element(degree.begin(), degree.end())+1<<'\n';


    return 0;
}
