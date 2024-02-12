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
        ll l = 1, r = 1e10;

        while(l<r){
            ll m = l + (r-l)/2;
            //cout<<l<<' '<<r<<'\n';
            if(m*(m-1) >= (n*2)){
                r = m;
            } else {
                l = 1+m;
            }
        }
        ll minn = l;
        if(minn*(minn-1) == (n*2)){
            cout<<minn<<'\n';
        continue;
        }
        ll left = minn-1;
        //cout<<left<<'\n';
        ll remaining = n - ((left*(left-1)/2));
        cout<< remaining + left<<'\n';

    }


    return 0;
}
