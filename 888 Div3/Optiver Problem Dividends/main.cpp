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

    void set(ll x, ll lx, ll rx, ll i, ll v){
        if(rx-lx==1){
            sums[x] = v;
            return;
        }
        ll m = (lx+rx)/2;
        if(i<m){
            set(2*x+1, lx, m, i, v);
        } else {

            set(2*x+2, m, rx, i, v);
        }

        sums[x] = sums[2*x+1] + sums[2*x+2];

    }
    void set(ll i, ll v){
        set(0, 0, size, i, v);
    }

    ll sum(ll l, ll r, ll x, ll lx, ll rx){
        if(l>=rx || r<=lx) return 0;
        if(lx>=l && rx <= r) return sums[x];

        ll m = (lx+rx)/2;
        ll sum1 = sum(l,r,2*x+1, lx, m);
        ll sum2 = sum(l, r, 2*x+2, m, rx);

        return sum1+sum2;

    }
    ll sum (ll l, ll r){
        return sum(l,r, 0, 0, size);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    ll s,n,q;
    cin>>s>>n>>q;
    vector<ll> stocks(n);
    segtree st;
    st.init(10);
    vector<pair<ll,ll>> divis(n);
    for(ll i=0;i<n;i++){
        ll a,d;
        cin>>a>>d;
        divis[i] = {a,d};
        st.set(d, -a);
    }

    while(q--){
        ll op ;
        cin>>op;
        if(op == 1){
            ll i, a,d;
            cin>>i>>a>>d;
            ll oldi = divis[i].second;

            st.set(oldi, 0);
            divis[i] = {a, d};
            st.set(d, -a);
        }else {

            ll f;
            cin>>f;
            cout<<s + st.sum(0, f+1)<<'\n';
        }
            /*
        cout<<"PRINTING\n";ll cnt= 1, prev=1;
        for(auto x: st.sums){
            cout<<x<<' ';
            cnt++;
            if(cnt == prev*2){
                cout<<'\n';
                prev= cnt;
            }
        }
        cout<<'\n';
        */
    }



    return 0;
}
/*

1000 2 21
100 10
50 100
2 3
2 5
2 8
2 9
2 11
2 50
2 99
2 100
2 101
2 300
1 1 70 4
2 3
2 5
2 8
2 9
2 11
2 50
2 99
2 100
2 101
2 300

*/
//Testcase 2
/*
1000 3 14
50 3
20 8
3 5
2 4
2 5
1 2 60 4
2 5
2 4
2 3
2 9
1 0 10 10
2 5
2 4
2 3
2 9
2 11
2 70

*/
