#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll w,h,n;
    cin>>w>>h>>n;
    ll tot = w*h*n;

    ll l = 0;
    ll r = 1;
    while((r/w)*(r/h)<n)r*=2;
    while(l<r){
        ll m = l +(r-l)/2;
        ll left = m/w;
        ll right = m/h;
        //cout<<left*right<<'\n';
        if(left*right>=n){
            r = m;
            //cout<<r<<'\n';
        } else {
            l = m+1;
          //  cout<<"L "<<l<<'\n';
        }

    }
   // cout<<l/w<<' '<<l/h<<' '<<(l/w)*(l/h)<<'\n';
    cout<<l<<'\n';


    return 0;
}
