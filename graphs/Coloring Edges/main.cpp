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
vi g[5001];
ll visited[5001];
bool cycles=false;

bool dfs(ll v)
{
    visited[v]=1;
    for(auto u:g[v])
    {
        if(visited[u]==0)
        {
            dfs(u);
        }
        else if(visited[u]==1)
        {
            cycles=true;
        }
    }
    visited[v]=2;
}

bool hascycle(ll v)
{
    cycles=false;
    for(auto u:g[v])
    {
        if(visited[u]==0)
            {
                dfs(u);
            }
    }
    return cycles;
}


int main()
{
    IOS
    ll n,m;
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    vpi edge(m);
    rep(i,0,m)
    {
        ll u,v;
        cin>>u>>v;
        edge[i] = (mp(u,v));
        g[u].pb(v);
        //g[v].pb(u);

    }
    ll f=1;

    rep(i,0,n)
    {
        if(!visited[i+1])
        {
            if(hascycle(i))
                f=0;
        }

    }
    if(f)
    {
        cout<<"1\n";
        rep(i,0,m)
            cout<<"1 ";

    }
    else
    {
        cout<<"2\n";
        rep(i,0,m)
        {
            if(edge[i].first>edge[i].second)
                cout<<"1 ";
            else
                cout<<"2 ";
        }
    }



    return 0;
}
