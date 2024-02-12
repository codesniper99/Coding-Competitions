#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll fibs[100006];
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    fibs[1] = 1;
    fibs[2] = 1;
    for(ll i=3;i<=43;i++){
        fibs[i]= fibs[i-1]+fibs[i-2];
    }
    while(t--){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        if(k>43){
            cout<<"0\n";
            continue;
        }
        ll fk_1 = fibs[k-1];
        ll fk_2 = fibs[k-2];
        ll ans = 0;
        for(ll a1=0;a1<=(n/fk_2);a1++){
                //cout<<a1<<' ' << (n-fk_2*a1)<<'\n';
            if((n-(fk_2*a1))%fk_1 == 0){
                if(((n-fk_2*a1)/fk_1) >= a1 )
                {
                    ans++;
                }
            }

        }
        cout<<ans<<'\n';
    /*
    1
    22 4
        */
    }


    return 0;
}
