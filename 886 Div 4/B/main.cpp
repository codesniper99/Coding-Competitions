#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
//BBBB
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n), b(n);
        ll maxx = 0, maxind = -1;
        for(ll i=0;i<n;i++){
            cin>>a[i]>>b[i];
            if(a[i]<=10){
                if(b[i]>maxx){
                    maxx = b[i];
                    maxind = i;
                }
            }
        }
        cout<<maxind+1<<'\n';
    }


    return 0;
}
