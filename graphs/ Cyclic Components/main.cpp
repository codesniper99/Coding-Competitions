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
vi g[200001];
bool visited[200001];

bool dfs(ll v)
{
    visited[v]=true;
    ll f=0;
    if(g[v].size()!=2)
        f=1;

    for(auto u:g[v])
    {
        if(!visited[u])
            {

                bool check = dfs(u);
                if(!check)
                    f=1;

            }

    }
    if(f==1)
        return false;
    else
        return true;
}
int main()
{
    IOS
    memset(visited,0,sizeof(visited));
    ll n,m;
    cin>>n>>m;
    rep(i,0,m)
    {
        ll u,v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);

    }
    ll count=0;
    rep(i,1,n+1)
    {
        if(!visited[i])
            {
                if(dfs(i))
                    count++;
            }
    }

    cout<<count<<'\n';
    return 0;
}
