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

        ll n,m,k;
        cin>>n>>m>>k;

        ll x,y;
        cin>>x>>y;
        vector<ll>xcoords(k), ycoords(k);
        bool caught = false;
        for(ll i=0;i<k;i++){
            cin>>xcoords[i]>>ycoords[i];
            if(xcoords[i] == x && ycoords[i] == y){
                caught = true;
            }
        }

        if(caught){
            cout<<"NO\n";
            continue;
        }

        for(ll i=0;i<k;i++){
            ll dist = (int)(abs(xcoords[i]-x) + abs(ycoords[i]-y));
            if(dist%2 == 0){
                caught = 1;
                break;
            }
        }
        if(caught){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";

    }


    return 0;
}
