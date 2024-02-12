#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        ll suma = 0;
        ll sumb = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
            sumb+=b[i];
        }
        if(suma>sumb){
            cout<<"Tsondu\n";
        } else if(suma == sumb){
            cout<<"Draw\n";
        }
        else {
            cout<<"Tenzing\n";
        }
    }



    return 0;
}
