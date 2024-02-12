#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct segtree {
    ll size;

    vector<ll> sums;
    void init(ll n){
        size = 1;
        while(size<n)size*=2;
        sums.assign(2*size, 0);
    }

    void set(ll ind, ll v, ll x, ll lx, ll rx){
        if(rx-lx==1){
            sums[x] = v;
            return;
        }
        ll m = (lx+rx)/2;
        if(ind<m){
            set(ind, v, 2*x+1, lx, m);
        } else {
            set(ind, v, 2*x+2, m, rx);
        }

        sums[x] = sums[2*x+1] + sums[2*x+2];


    }
    void set(ll ind, ll v){
        set(ind, v, 0, 0, size);
    }

    ll sum(ll l, ll r, ll x, ll lx , ll rx){
        if(lx>=r || rx<=l)return 0;
        if(lx>=l && rx<=r)return sums[x];

        ll m = (lx+rx)/2;

        ll sum1=  sum(l,r,2*x+1, lx, m);
        ll sum2=  sum(l,r,2*x+2, m, rx);

        return sum1+sum2;
    }
    ll sum(ll l, ll r){
        return sum(l,r,0,0,size);
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    vector<ll> p(n);
    segtree st;
    st.init(n);
    for(ll i=0;i<n;i++){
        cin>>p[i];
        p[i]--;

        cout<<st.sum(p[i], n)<<' ';
        st.set(p[i], 1);
    }
    cout<<'\n';


    return 0;
}
