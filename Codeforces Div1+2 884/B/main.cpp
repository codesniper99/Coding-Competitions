#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> res(n,0);

            res[n/2] = 1;
            ll j =2;
            for(ll i=0;i<n/2;i++){
                res[i] = j;
                j+=2;
            }
            j =3;
            for(ll i=n-1;i>=(n/2)+1;i--){
                res[i] = j;
                j+=2;
            }
            for(ll i=0;i<n;i++){
                cout<<res[i]<<' ';
            }
            cout<<'\n';

    }


    return 0;
}
