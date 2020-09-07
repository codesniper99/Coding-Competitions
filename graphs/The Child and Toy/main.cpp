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
/*
vi g[2004];
bool visited[2004];

ll dfs(ll v, vpi r, vi cost)
{
    visited[v]=true;
    ll sum=0;
    for(auto u:g[v])
    {
        if(!visited[u])
        {
            sum+=cost[u-1];
        }
    }
    return sum;
}
*/
bool comp(pair<ll,ll>a, pair<ll,ll>b)
{
    return a.first>=b.first;
}

int main()
{
    IOS
    ll n,m;
    //memset(visited,0,sizeof(visited));

    cin>>n>>m;
    vpi v(n);
    vi cost(n);
    rep(i,0,n){
        cin>>cost[i];
     //   v[i]=mp(cost[i],i+1);

    }
    ll ans=0;
    rep(i,0,m)
    {
        ll u,v;
        cin>>u>>v;
        ans+=min(cost[u-1],cost[v-1]);
   //      g[u].pb(v);
   //     g[v].pb(u);

    }
    cout<<ans<<'\n';
    /*ll ans=0;
    sort(v.begin(),v.end(), comp);
    rep(i,0,n)
    {
        ll node = v[i].second;
        if(!visited[node])
            ans+=dfs(node,v,cost);
    }
    cout<<ans<<'\n';
*/
    return 0;
}
