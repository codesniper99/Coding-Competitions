#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct Segtree {

    ll size;
    vector<ll> sums, operations;
    void init(ll n){
        size = 1;
        while(size<n){
            size*=2;
        }
        sums.assign(2*size, 0LL);
        operations.assign(2*size, 0LL);
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
    void add(ll l, ll r, ll v, ll x, ll lx, ll rx){
        if(lx>=r || rx<=l) return;
        if(lx>=l && rx<=r) {
            operations[x]+=v;
            return;
        }
        ll m  = (lx+rx)/2;
        add(l,r,v,2*x+1,lx,m);
        add(l,r,v,2*x+2,m,rx);

    }

    void add(ll l, ll r, ll v){
        add(l, r, v , 0, 0, size);
    }
    ll whatVal(ll x, ll i, ll lx, ll rx){
        if(rx-lx == 1){
            return operations[x];
        }
        ll m = (lx+rx)/2;
        ll res=0;
        if(i<m){
            res = whatVal(2*x+1, i, lx, m);
        } else {
            res = whatVal(2*x+2, i, m, rx);
        }

        return res+operations[x];
    }
    ll whatVal(ll i){
        return whatVal(0, i, 0, size);
    }



};

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,m;
    cin>>n>>m;
    Segtree st;

    st.init(n);
    while(m--){

        ll op;
        cin>>op;
        if(op == 1){
            ll l, r, v;
            cin>>l >> r >>v;
            st.add(l, r, v);
        } else {
            ll i;
            cin>>i;
            cout<<st.whatVal(i)<<'\n';
        }

    }


    return 0;
}
