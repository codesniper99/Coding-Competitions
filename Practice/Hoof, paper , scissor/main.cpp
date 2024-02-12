#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("hps.in", "r", stdin);
    ll n;
    cin>>n;
    vector<char> a(n);
    vector<vector<ll>> prefix(n+1, vector<ll>(3,0));
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            prefix[i+1][0] = prefix[i][0];
            prefix[i+1][1] = prefix[i][1];
            prefix[i+1][2] = prefix[i][2];

            if(a[i] == 'P'){
                prefix[i+1][0]++;
            } else if (a[i] == 'H'){
                prefix[i+1][1]++;
            } else {
                prefix[i+1][2]++;
            }
        } else {
            if(a[i] == 'P'){
                prefix[i+1][0] = 1;
            } else if (a[i] == 'H'){
                prefix[i+1][1] = 1;
            } else {
                prefix[i+1][2] = 1;
            }
        }

    }
    ll maxx = 0;
    for(ll div = 0; div<=n;div++){
        ll left = max(prefix[div][0], max(prefix[div][1], prefix[div][2]));
        ll right = max( prefix[n][0]-prefix[div][0], max(prefix[n][1]-prefix[div][1], prefix[n][2]-prefix[div][2]));
        maxx = max(maxx, left+right);
    }
    freopen("hps.out", "w", stdout);
    cout<<maxx<<'\n';


    return 0;
}
