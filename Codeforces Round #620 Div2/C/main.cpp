#include <bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define mod 1000000007
#define us unsigned short
#define IOS ios_base::sync_with_stdio(0);
#define INF LONG_MAX
#define PI 3.1415926535897932384626
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define rep(x,j,n)for(int x=j;x<n;x++)
typedef vector<pair<ll,ll>> vpi;
typedef vector<ll> vi;
typedef vector<vi> vvi;

ll modexp(ll a,ll b,ll m)
{
	ll r=1;
	a=a%m;
	while(b>0)
	{
	if(b&1)
		r=(r*a)%m;
	b=b/2;
	a=(a*a)%m;
	}
	return r%m;
}
struct cust{

    ll t,l,h;

};
/*
bool fun(cust a, cust b)
{
    return a.t<=b.t;

}
struct node{

ll low,high,id;
};
ll n,m;
vector<cust>customers(104);
bool recur()
{

    queue<node>where_can_go;
    node init;
    init.id=-1;
    cust x =  customers[0];
    init.high = x.t +m;
    init.low = m-x.t;

    where_can_go.push(init);
    while(!where_can_go.empty())
    {

        node p =where_can_go.front();
        //cout<<p.id<<' '<<p.high<<' '<<p.low<<'\n';
        where_can_go.pop();
        ll low = p.low;
        ll high = p.high;
        ll idd = p.id;
        ll targ_low = customers[idd+1].l;

        ll targ_high = customers[idd+1].h;

        if((low <=targ_low && high >=targ_high) ||(low >=targ_low && low <=targ_high) ||(high <=targ_high && high >=targ_low) )
        {
            node passon;
            passon.low = max(low,targ_low);
            passon.high = min(high,targ_high);
            passon.id = p.id+1;
            if(p.id == n-2)
            {
                return true;
            }
            node next_high, next_low;
            ll movement = customers[p.id+2].t - customers[p.id+1].t;
            next_high.low = passon.high-movement;
            next_high.high = passon.high+movement;
            next_high.id = p.id+1;

            next_low.low = passon.low-movement;
            next_low.high =  passon.low+movement;
            next_low.id = p.id+1;

            where_can_go.push(next_high);
            where_can_go.push(next_low);

        }
       else
            continue;


    }
    return false;


}

int main()
{
    IOS
    ll q;
    cin>>q;

    while(q--)
    {
        cin>>n>>m;
        rep(i,0,n)
        {
            cin>>customers[i].t>>customers[i].l>>customers[i].h;
        }

        if(n<2)
        {
            ll high  = m+customers[0].t;
            ll low  = m-customers[0].t;
            if((low <=customers[0].l && high >=customers[0].h) ||(low >=customers[0].l && low <=customers[0].h) ||(high <=customers[0].h && high >=customers[0].l) )
            cout<<"YES\n";
            else
                cout<<"NO\n";

        }
        else{
        if(recur())
            cout<<"YES\n";
        else
            cout<<"NO\n";

        }

    }
    return 0;
}
*/


    int main(){
        IOS
        int t;
        cin>>t;
        while(t--){
            ll n,m,f=0;
            cin>>n>>m;
            vector<pair<ll,pair<ll,ll>>> customer;
            for(ll i=0;i<n;i++)
            {
                ll a,b,c;
                cin>>a>>b>>c;
                customer.push_back({a,{b,c}});
            }
            pair<ll,ll> pabloss;
            pabloss.fi=m-customer[0].fi;
            pabloss.se=m+customer[0].fi;
            if(pabloss.fi>customer[0].se.se or pabloss.se<customer[0].se.fi)
                {
                cout<<"NO"<<'\n';
                continue;
            }
        //;
            pabloss.first=max(pabloss.first,customer[0].se.first);
            pabloss.se=min(pabloss.se,customer[0].se.se);
            // cout<<psbl.firs
            for(ll i=1;i<customer.size();i++)
            {
                ll varr=customer[i].first-customer[i-1].first;
                pabloss.first=pabloss.first-varr;
                pabloss.se=pabloss.se+varr;
                if(pabloss.first>customer[i].se.se or pabloss.se<customer[i].se.first)
                {
                    cout<<"NO"<<'\n';
                    f=1;
                    break;
                }
                pabloss.first=max(pabloss.first,customer[i].se.first);
                pabloss.se=min(pabloss.se,customer[i].se.se);
            }
            if(!f)
                cout<<"YES"<<endl;
        }
        return 0;
    }
