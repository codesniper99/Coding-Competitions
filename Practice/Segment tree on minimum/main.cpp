#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct segtree {
    vector<ll> mins;
    ll size ;
    void init(ll n){
        size = 1;
        while(size<n)size*=2;
        mins.assign(2*size, INT_MAX);
    }

    void set(ll i, ll v, ll x, ll lx, ll rx){
        if(rx-lx == 1){
            mins[x] = v;
            return;
        }

        ll m = (lx+rx)/2;
        if(i<m){
            set(i, v, 2*x+1, lx, m);
        }
        else {

            set(i, v, 2*x+2, m, rx);
        }
        mins[x] = min(mins[2*x+1], mins[2*x+2]);
    }

    void set(ll i, ll v){
        set(i, v,0,  0, size);
    }

    ll minfind(ll l, ll r, ll x, ll lx , ll rx){
        if(lx>=r || rx <=l) return INT_MAX;
        if(lx>= l && rx<= r) return mins[x];

        ll m = (lx+rx)/2;
        ll min1 = minfind(l,r,2*x+1, lx, m);
        ll  min2 = minfind(l, r, 2*x+2, m, rx);
        return min(min1, min2);

    }
    ll minfind(ll l, ll r){
        return minfind(l,r,0,0,size);
    }

};
int main()
{
    ios_base::sync_with_stdio(false);
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    segtree st;
    st.init(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        st.set(i, a[i]);
    }

    while(m--){
        ll op;
        cin>>op;
        if(op == 1){
            ll i,v;
            cin>>i>>v;
            st.set(i,v);

        }
        else {
            ll l, r;
            cin>>l>>r;
            cout<<st.minfind(l,r)<<'\n';
        }

    }


    return 0;
}
