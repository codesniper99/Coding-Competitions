#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    map<ll, ll > ans;
        ll x = 7;ll open = 1;ll covered = 0;

    for(ll k=2;k<=1000;k++){
            open = 1;
            covered = 0;
            open = k;
            covered = 1;
            open = k*k;
            covered+=k;
            ans[open+covered] = 1;
            while(open+covered <= 1000000){
                ans[open*k + covered+open] = 1;
                covered+=open;
                open = open*k;
            }
        }
    while(t--){
        ll n;
        cin>>n;

        if(ans.count(n)){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";

    }


    return 0;
}
