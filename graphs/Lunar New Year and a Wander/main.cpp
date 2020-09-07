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

    vi g[100001];
    vi ans;
    bool visited[100001];

    void solve(ll v)
    {
    /*
        visited[v]=true;
        ans.pb(v);
        vi order;
        order.clear();
        for(auto u:g[v])
        {
            if(!visited[u])
            {
                order.pb(u);
            }
        }
        sort(order.begin(),order.end());
        for( auto u:order)
        {
            if(!visited[u])
                solve(u);
        }
    */
    priority_queue<int, vector<int>, greater<int>>p;
    p.push(1);
    visited[1]=true;
    while(!p.empty())
    {
        ll top = p.top();
        p.pop();
        ans.pb(top);
        //visited[top]=true;
        for(auto u:g[top])
        {
            if(!visited[u])
                {
                    p.push(u);
                    visited[u]=true;
                }
        }
    }

    }

    int main()
    {
        IOS
        ans.clear();
        memset(visited,false,sizeof(visited));

        ll n,m;
        cin>>n>>m;
        rep(i,0,m)
        {
            ll u,v;
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }
        solve(1);
        rep(i,0,n)
            cout<<ans[i]<<' ';
        cout<<'\n';
        return 0;
    }
