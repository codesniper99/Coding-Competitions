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

    vi g[150001];
    bool visited[150001];
    ll parent[150001];

    ll fin(ll x)
    {
        if(parent[x]==x)
            return x;
        else
            return parent[x] = fin(parent[x]);

    }

    void uni(ll a, ll b)
    {
          a = fin(a);
          b = fin(b);
          if(a!=b)
          {
              parent[fin(a)] = fin(b);
          }
    }

    void dfs(ll v, ll &e, ll &n)
    {
        visited[v]=true;
        n++;
        for(auto u:g[v])
        {
            if(!visited[u])
            {
                e++;

            }
        }
        for(auto u:g[v])
        {
            if(!visited[u])
            {
                dfs(u,e,n);
            }
        }

    }


    int main()
    {
        IOS
        ll n,m;
        cin>>n>>m;
       // vpi edge(m);
        rep(i,0,m)
        {
            ll u,v;
            cin>>u>>v;
            //edge[i].first=u;
            //edge[i].second = v;
            g[u].pb(v);
            g[v].pb(u);
           // uni(u,v);
        }
        ll f=0;
        rep(i,0,n)
        {
            if( !visited[i] )
            {
                ll e=0,n=0;
                dfs(i,e,n);
                //cout<<e<<' '<<n<<'\n';
                if((n*(n-1)/2) !=e)
                {
                    f=1;
                    break;
                }

            }

        }
        if(f&1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

        return 0;
    }
