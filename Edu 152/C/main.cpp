#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
struct segment{
    ll ind;
    ll start, endd;
};
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<segment> segs;

        char prev = '0';
        ll start = 0, endd=0, mid=0;
        for(ll i=0;i<n;i++){
            if(prev == '1'){
                if(s[i] == '0'){
                    segment snew ;
                    snew.start = start;
                    snew.ind = mid;
                    snew.endd = endd;
                    segs.push_back(snew);
                    start = i;
                    endd = i;
                } else {
                    endd++;
                }

            } else {
                if(s[i] == '0'){
                    endd++;
                } else {
                    mid = i;
                    endd++;
                    prev= '1';
                }
            }

        }
        segment snew ;
        snew.start = start;
        snew.ind = mid;
        snew.endd = endd;
        segs.push_back(snew);
        sort(segs.begin(), segs.end());

        ll ans = 0;
        while(m--){
            ll l,r;
            cin>>l>>r;

            ll indx = lower_bound(segs.begin(), segs.end(), l);
            ll indxup = lower_bound(segs.begin(), segs.end(), r);

            if(indx == indxup){
                continue;
            }
            else {
                if(r>segs[indxup].ind){
                    continue;
                }
                else {
                    ans++;
                }

            }
        }

        cout<<ans<<'\n';
    }


    return 0;
}
