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

vi adj[100001];
ll visited[100001];


ll bfs(ll v)
{
    visited[v]=1;
    ll count=0;
    for(auto u:adj[v])
    {
        if(!visited[u])
            {
                count+=1+bfs(u);
            }
    }
    return count;
}


int main()
{
    IOS
    memset(visited,0,sizeof(visited));
    ll n,k;
    cin>>n>>k;
    ll sad=0;
    map<pair<ll,ll> ,ll>m;
    m.clear();
    //vpi flav(k);
    rep(i,0,k)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);

    }
    rep(i,1,n+1)
    {
        if(!visited[i])
        {
           sad+= bfs(i);
        }
    }
    cout<<k-sad<<'\n';



    return 0;
}
