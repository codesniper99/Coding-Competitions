#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);


    int t;
    cin>>t;
    while(t--) {
        int n;
        ll k ;
        cin>>n>>k;
        vector<ll> a(n), b(n), c(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            c[i]=a[i];
        }
        for(int i=0;i<n;i++) {
            cin>>b[i];
        }
        sort(c.begin(), c.end());
        sort(b.begin(), b.end());
        map<ll, vector<ll>> m;
        for(int i =0;i<n;i++)
        {
            m[c[i]].push_back(b[i]);

        }

        for(int i =0;i<n;i++)
        {
            cout<<*m[a[i]].begin()<<' ';
            m[a[i]].erase(m[a[i]].begin());
        }
        cout<<'\n';

    }
    return 0;
}
