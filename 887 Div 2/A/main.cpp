#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
// A
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    ll found = 0;
    while(t--){
        ll n;
        cin>>n;
        found = 0;
        vector<ll> a(n), diff;
        ll minn = INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i>=1){
                diff.push_back(a[i]-a[i-1]);
                minn = min(minn, a[i]-a[i-1]);
                if(a[i]-a[i-1]<0){
                    found = 1;
                }
            }
        }
        if(found){
            cout<<"0\n";
            continue;
        }
        if(minn == 0){
            cout<<"1\n";
            continue;
        }
        if(minn%2==0){
            cout<<minn/2 +1<<'\n';
        }
        else {

            cout<<(minn+1)/2<<'\n';
        }


    }


    return 0;
}
