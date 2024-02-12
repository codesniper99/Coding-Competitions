#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll,ll> factors;


void listFactors(ll n){

    for(ll i=1;i*i<=n;i++){
            if(n%i == 0){
                factors[i] = 1;
                if(n/i != i){
                    factors[n/i] = 1;
                }
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        factors.clear();
        string res;
        ll cycle=n;

        listFactors(n);

        //cout<<factors[4]<<'\n';
        for(ll i=1;i<=n;i++){
            if(!factors[i]){
                cycle = i;
                break;
            }
        }
        ll len = 0, val = 0;
        //cout<<"cycel = "<<cycle<<'\n';
        while(len<n){
            if(val%cycle == 0){
               val = 0;
            }
            res+= char('a'+val);
            val++;
            len++;
        }


        cout<<res<<'\n';
    }


    return 0;
}
