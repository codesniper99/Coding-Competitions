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

        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            vi a(n);
            rep(i,0,n)
                cin>>a[i];

            ll mx = -1;
            vector<ll> points;

            rep(i,0,n)
            {
                if(i-1>=0 && a[i-1]!=-1)
                    if(a[i] ==-1)
                        points.pb(a[i-1]);
                if(i+1<=n-1 && a[i+1]!=-1)
                    if(a[i] ==-1)
                        points.pb(a[i+1]);
            }

            if(points.size()==0)
            {
                cout<<"0 0\n";continue;
            }
            ll mxx = *max_element(points.begin(),points.end());
            ll mini = *min_element(points.begin(),points.end());
            rep(i,0,n)
            {
                if(a[i]==-1)
                {
                    a[i]= (mxx+mini)/2;
                }

            }
            rep(i,0,n-1)
            {
                if(abs(a[i]-a[i+1])>mx)
                    mx=abs(a[i]-a[i+1]);
            }
            cout<<mx<<' ' << (mxx+mini)/2<<'\n';
        }
        return 0;
    }
