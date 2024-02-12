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
        vector<ll> pref(n-1);
        map<ll,ll> nums;
        vector<ll> diffs;
        ll nope = 0;
        ll prev = 0;
        ll totgreaterthann = 0;
        for(ll i=0;i<n-1;i++){

            cin>>pref[i];
            diffs.push_back(pref[i]-prev);
            if(pref[i]-prev > n){
                totgreaterthann++;
            }
            if(pref[i]-prev>=2*n){
                nope = 1;
            }
            prev = pref[i];
        }
        if(*max_element(pref.begin(), pref.end()) > n*(n+1)/2){
            nope = 1;
        }
        if(totgreaterthann >= 2){
            nope = 1;
        }
        vector<ll> sameDiffs;
        for(ll i = 0; i<n-1;i++){
            nums[diffs[i]]++;
            if(nums[diffs[i]]>2){
                nope = 1;
                break;
            }
            if(nums[diffs[i]] == 2){
                sameDiffs.push_back(diffs[i]);
            }
        }

        if(sameDiffs.size()>=2){
            nope = 1;
        }

        if(nope ){
            cout<<"NO\n";
            continue;
        }

        ll missingsum= 0 ;
        for(ll i=1;i<=n;i++){
            if(nums[i]== 0){
                missingsum+= i;
            }
        }

        if(sameDiffs.size()>0){
              //  cout<<missingsum<<' '<<sameDiffs[0];
           if(missingsum != sameDiffs[0]){
            cout<<"NO\n";
            continue;
            }
        }
        if(totgreaterthann >0){
            if(*max_element(diffs.begin(), diffs.end()) != missingsum){
                cout<<"NO\n";
                continue;
            }
        }


        cout<<"YES\n";






    }


    return 0;
}
