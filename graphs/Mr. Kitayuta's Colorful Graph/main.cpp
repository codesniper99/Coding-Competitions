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

vector< pair<ll,ll>> g[101];

bool visited[101];

bool dfs(ll u, ll v, ll c)
{
    visited[u]=true;
    if(u==v)
        return true;
    for( auto x: g[u])
    {
        if(!visited[x.first] && x.second == c)
            {
                if(dfs(x.first,v,c))
                    return true;
            }

    }
    return false;
}

void solve(ll u, ll v)
{
    ll count=0;
    rep(i,1,101)
    {
        memset(visited,0,sizeof(visited));

            if(dfs(u,v,i))
                count++;
    }
    cout<<count<<'\n';

}


int main()
{
    IOS
    ll n,m;
    cin>>n>>m;
    rep(i,0,m)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        g[a].pb({b,c});
        g[b].pb({a,c});
    }
    ll q;
    cin>>q;
    rep(i,0,q)
    {
        ll u,v;
        cin>>u>>v;
        solve(u,v);
    }



    return 0;
}
