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
        vector<ll> vals(n);
        for(ll i=0;i<n;i++){
            cin>>vals[i];
        }
        ll oddsum = 0, evensum =0;
        ll res = *max_element(vals.begin(), vals.end());
        for(ll i=0;i<n;i++){
            if(i&1){
                //odd
                if(vals[i]>0){
                    oddsum+=vals[i];
                }
            } else {
                if(vals[i]>0){
                    evensum+=vals[i];
                }
            }
        }
        if(max(oddsum,evensum)==0){
            cout<<res<<'\n';
        } else
            cout<<max(oddsum,evensum)<<'\n';


    }


    return 0;
}
