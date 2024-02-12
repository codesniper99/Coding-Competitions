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
        ll k;
        cin>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll removed = 0;
        ll maxpos = n-1, minpos = 0;

        vector<ll> sectionlens;
        ll prev = a[0], sizee = 1;
        for(ll i=1;i<n;i++){
            if(a[i]-prev>k){
                sectionlens.push_back(sizee);
                sizee = 1;
            } else {
                sizee++;
            }
            prev = a[i];

        }
        sectionlens.push_back(sizee);
        sort(sectionlens.begin(),sectionlens.end());
        ll sz = sectionlens.size();

        for(ll i=0;i<sz-1;i++){
            removed+=sectionlens[i];
        }


        cout<<removed<<'\n';

    }


    return 0;
}
