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
        vector<ll>a(n);
        vector<ll> even, odd, place(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];

            if(a[i]%2==0){
                even.push_back(a[i]);
                place[i] = 0;
            } else {

                    odd.push_back(a[i]);
                    place[i] = 1;
                }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        if(even.size()==0 || odd.size() == 0){
            cout<<"YES\n";
            continue;
        }

        ll cnt = 0, evencnt = 0, oddcnt = 0;
        while(cnt<n){
            if(place[cnt] == 0){
                place[cnt] = even[evencnt];
                evencnt++;
            } else {
                place[cnt] = odd[oddcnt];
                oddcnt++;
            }
            cnt++;
        }
        ll prev = INT_MIN, fault = 0;
        for(ll i=0;i<n;i++){
                //cout<<place[i]<<' ';
            if(place[i]<prev){
                fault = 1;
                break;
            }
            prev = place[i];
        }
        if(fault){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";




    }


    return 0;
}
