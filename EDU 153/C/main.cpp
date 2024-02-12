#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct Segtree {

    ll size;
    vector<ll> sums;
    void init(ll n){
        size = 1;
        while(size<n){
            size*=2;
        }
        sums.assign(2*size, 0LL);
    }

    void set(ll i, ll v, ll x, ll lx, ll rx){
        if(rx-lx == 1){
            sums[x] = v;
            return;
        }
        ll m = (lx+rx)/2;
        if(i < m){
            set(i, v, 2*x+1, lx, m);
        } else {
            set(i, v, 2*x+2, m, rx);
        }
        sums[x] = sums[2*x+1] + sums[2*x+2];
    }

    void set(ll i, ll v){
        set(i, v, 0, 0, size);
    }

    ll sum(ll x, ll l, ll r, ll lx, ll rx){
        if(lx>=r || l>=rx) return 0;
        if(lx>= l && rx <= r) return sums[x];

        ll m = (lx+rx)/2;
        ll sum1 = sum(2*x+1, l, r, lx, m);
        ll sum2 = sum(2*x+2, l, r, m, rx);
        //cout<<lx<<' ' << rx<<' ' << sum1<<' '<<sum2<<'\n';
        return sum1+sum2;
    }

    ll sum(ll l, ll r){
        return sum(0, l, r, 0, size);
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        Segtree st;
        st.init(n);
        vector<ll> a(n);
        ll minz = 1e9;
        ll ans = 0;
        vector<ll> lcky(n+1, 0);
        for(ll i=0;i<n;i++){

            cin>>a[i];
            if(i>0){
                if(a[i-1] < a[i]){
                    if(lcky[a[i-1]]){
                        lcky[a[i]] = 0;
                    } else {
                        if(st.sum(1, a[i]) == 0){
                            lcky[a[i]] = 1;
                            st.set(a[i], 1);
                            ans++;
                        } else {
                            lcky[a[i]]= 0;
                        }
                    }
                }
            } else {
                if(lcky[a[i-1]]){
                        if(a[i] > minz) {
                            lcky[a[i]] = 1;
                            st.set(a[i], 1);
                            ans++;
                        } else {
                            minz = a[i];
                            lcky[a[i]] = 0;
                        }
                    } else {
                        if(st.sum(1, a[i]) == 0){
                            if(a[i] > minz) {
                            lcky[a[i]] = 1;
                            st.set(a[i], 1);
                            ans++;
                            } else {
                                minz = a[i];
                                lcky[a[i]] = 0;
                            }
                        } else {
                            lcky[a[i]]= 0;
                        }
                    }
            }
        }
        cout<<ans<<'\n';


    }


    return 0;
}
