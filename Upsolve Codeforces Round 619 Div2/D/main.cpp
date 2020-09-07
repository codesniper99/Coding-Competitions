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


int main()
{
    IOS
    ll n,m,k;
    cin>>n>>m>>k;


    vector<pair<ll,string>> order;
    order.clear();
    ll curr = 0;
    rep(i,0,n)
    {
        order.pb(make_pair(m-1,"R"));
        curr+= order.back().first*order.back().second.size();
        //right

        if(i==0)
        {
         order.pb(make_pair(m-1,"L"));
         curr+= order.back().first*order.back().second.size();
        }
        else
        {
            order.pb(make_pair(m-1,"UDL"));
            curr+= order.back().first*order.back().second.size();

        }
        if(i<= n-2)
        {
            order.pb(make_pair(1,"D"));
            curr+= order.back().first*order.back().second.size();

        }
        else
            {
                order.pb(make_pair(n-1,"U"));
                curr+= order.back().first*order.back().second.size();
            }
    }

    if(k>curr)
        { cout<<"NO\n";return 0;}

    while(curr>k)
    {
        pair<ll,string> tmp = order.back();
        curr-=order.back().first*order.back().second.size();
        order.pop_back();

        if(curr>=k)
            continue;

        ll far_away = k-curr;

        order.push_back(make_pair((long long)(far_away/tmp.second.size()),tmp.second ));
        if(far_away%tmp.second.size()!=0)
        {
            ll left =far_away%tmp.second.size();
            string subs = tmp.second.substr(0, left);
            order.push_back(make_pair(1, subs));
        }

    }
    ll sz=0;
    for(auto x :order)
    {
        if(x.first!=0)
        sz++;


    }
    cout<<"YES\n"<<sz<<'\n';

    for(auto x :order)
    {
        if(x.first!=0)
        cout<<x.first<<' '<<x.second<<'\n';


    }
    return 0;
}
