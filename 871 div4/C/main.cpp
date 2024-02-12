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
        vector<string> m(n);
        set<ll> both, first, second;
        for(ll i=0;i<n;i++){
                ll val;
        cin>>val;
            cin>>m[i];
            if(m[i][1] =='1'){
                second.insert(val);
                if(m[i][0] == '1')
                    both.insert(val);
            } else if(m[i][0] == '1'){
                first.insert(val);
            }

        }
        ll ans =10000000;
        if(both.size()>0){
          ans = min(ans, *both.begin());
        }

        if(first.size()>0 && second.size()>0){
            ans = min(ans, *first.begin()+ *second.begin());
        }
        cout<<(ans == 10000000? -1 : ans) <<'\n';

    }


    return 0;
}
