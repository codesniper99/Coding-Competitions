#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct segtree {
    vector<pair<ll,ll>> mins;
    ll size ;
    void init(ll n){
        size = 1;
        while(size<n)size*=2;
        mins.assign(2*size, {INT_MAX,0});
    }

    void set(ll i, ll v, ll x, ll lx, ll rx){
        if(rx-lx == 1){
            mins[x] = {v, 1};
            return;
        }

        ll m = (lx+rx)/2;
        if(i<m){
            set(i, v, 2*x+1, lx, m);
        }
        else {

            set(i, v, 2*x+2, m, rx);
        }
        pair<ll,ll> p ;
        pair<ll,ll> p1 = mins[2*x+1];
        pair<ll,ll> p2 = mins[2*x+2];

        if(p1.first< p2.first){
            p = p1;
        } else if (p2.first< p1.first){
            p = p2;
        } else {
            p = {p1.first, p1.second+p2.second};
        }

        mins[x] = p;
    }

    void set(ll i, ll v){
        set(i, v,0,  0, size);
    }

    pair<ll,ll> minfind(ll l, ll r, ll x, ll lx , ll rx){
        if(lx>=r || rx <=l) return {INT_MAX, 0};
        if(lx>= l && rx<= r) return {mins[x].first, mins[x].second};

        ll m = (lx+rx)/2;
        pair<ll,ll> min1 = minfind(l,r,2*x+1, lx, m);
        pair<ll,ll>  min2 = minfind(l, r, 2*x+2, m, rx);

        pair<ll,ll> p ;
        pair<ll,ll> p1 = min1;
        pair<ll,ll> p2 = min2;

        if(p1.first< p2.first){
            p = p1;
        } else if (p2.first< p1.first){
            p = p2;
        } else {
            p = {p1.first, p1.second+p2.second};
        }

        return (p);

    }
    pair<ll,ll> minfind(ll l, ll r){
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
            pair<ll,ll> p = st.minfind(l, r);
            cout<<p.first<< ' '<<p.second<<'\n';
        }

    }


    return 0;
}
