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
    bool visited[100001];

    double dfs(ll v)
    {

        visited[v]=true;
        double p = g[v].size();
        double x=0;
        double newcities=0;

        for(auto u:g[v])
        {
            if(!visited[u])
                newcities++;
        }

        if(newcities==0)
            return 0;

        double q =(double)1/newcities;

        for(auto u:g[v])
        {
            if(!visited[u])
                {
                    double len = dfs(u);

                    x+= q*(len+1);
                }
        }
        return x;

    }


    int main()
    {
        IOS
        ll n;
        cin>>n;
        rep(i,0,n-1)
        {
            ll u,v;
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }
        double f =dfs(1);
        cout<<fixed<<setprecision(13)<<f<<'\n';

        return 0;
    }
