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
        vector<ll> a(n);

        ll nonone=  0, one = 0, leeway = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 1){
                one++;
            } else {
                nonone++;
                leeway+= a[i]-1;
            }
        }
        if(n==1){
            cout<<"NO\n";
            continue;
        }
        if(one>nonone){
            if(leeway<one){

                cout<<"NO\n";
            }
            else {
                cout<<"YES\n";
            }
        } else {

            cout<<"YES\n";
        }



    }


    return 0;
}
