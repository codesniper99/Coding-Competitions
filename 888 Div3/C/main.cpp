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
        ll n,k;
        cin>>n>>k;
        vector<ll> c(n);
        map<ll,ll> cnt;

        for(ll i=0;i<n;i++){
            cin>>c[i];
            cnt[c[i]]++;
        }
        if(cnt[c[n-1]]<k){
            cout<<"NO\n";
            continue;
        }
        if(c[0] == c[n-1]){
            cout<<"YES\n";
            continue;

        }

        if(cnt[c[0]]<k){
            cout<<"NO\n";
            continue;
        }
        ll count = 0, itr = 0;
        while(count<k && itr<n){
            if(c[itr] == c[0]){
                count++;
            }
            itr++;
        }
        ll clrcnt = 0;

        while(itr<n && clrcnt <k){
            if(c[itr] == c[n-1]){
                clrcnt++;
            }
            itr++;
        }


        if(clrcnt == k){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";


    }


    return 0;
}
