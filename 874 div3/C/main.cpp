#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>a(n), odds, evens;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]&1) {
                odds.push_back(a[i]);
            } else {
                evens.push_back(a[i]);
            }
        }
        sort(odds.begin(), odds.end());
        sort(evens.begin(), evens.end());
        if(odds.size()==0) {
            cout<<"YES\n";
            continue;
        } else {
            if(evens.size()==0) {
                cout<<"YES\n";
                continue;
            }

            if(odds[0]<evens[0]) {
                cout<<"YES\n";
                continue;
            }
            cout<<"NO\n";
        }

    }


    return 0;
}
