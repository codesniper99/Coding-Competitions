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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = true;
        vector<ll> diag;

        vector<pair<ll,ll>> freq;
        ll prev = a[0], f = 1;
        for(ll i=1; i<n; i++){
            if(a[i] == prev){
                f++;
            }
            else {
                freq.push_back({prev, f});
                prev = a[i];
                f = 1;
            }
        }
        freq.push_back({prev, f});
        freq.push_back({0,1});
        ll sz = freq.size();ll cumsum = 0;
        for(ll i=0; i<sz-1; i++){

            ll nxtval = freq[i+1].first;
            ll total = freq[i].first - nxtval;
            if(total>1e5){
                flag = false;
                break;
            }
            if(total*sz > 1e8){
                flag = false;
                break;
            }

            while(total--){
                diag.push_back(freq[i].second+cumsum);

            }
            cumsum+=freq[i].second;

        }

        ll sz2 = diag.size();

        if(sz2!=a.size())
        {
            flag = false;
            cout<<"NO\n";
            continue;
        }
        for(ll i=sz2-1; i>=0; i--){
            if(diag[i]!=a[sz2-1 - i]){
                flag =false;
                break;
            }
        }



        if(flag){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }


    return 0;
}
