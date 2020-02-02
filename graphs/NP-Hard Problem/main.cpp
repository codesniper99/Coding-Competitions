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
    vi paint(1000001,0);
    bool visited[100001];

    bool dfs(ll v, ll color)
    {
        visited[v]=1;

        if(paint[v]==0)
            paint[v]=color;

        for(auto u: g[v])
        {
            if( paint[u]==color)
                    return false;

            if(!visited[u])
            {

                ll temp = ((color-1)^1)+1;
                bool check = dfs(u,temp);
                if(!check)
                    return false;
            }

        }
        return true;

    }

    int main()
    {
        IOS
        ll n,m;
        cin>>n>>m;
        memset(visited,0,sizeof(visited));
        rep(i,0,m)
        {
            ll u,v;
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }
        bool t =true;
        rep(i,1,n+1)
        {
            if(!visited[i])
                {
                    if(!dfs(i,1))
                        {
                            t=false;
                            break;
                        }
                }
        }

        if(t){
            vi p,q;
            p.clear();
            q.clear();
            rep(i,1,n+1)
            {
                if(paint[i]==1)
                    p.pb(i);
                else if(paint[i]==2)
                    q.pb(i);
                else
                ;
            }
            cout<<p.size()<<'\n';
            for( auto x:p)
                cout<<x<<' ';
            cout<<'\n';
            cout<<q.size()<<'\n';
            for(auto x:q)
                cout<<x<<' ';
            cout<<'\n';
        }
        else
        {
            cout<<"-1\n";
        }



            return 0;
    }
