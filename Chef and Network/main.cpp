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


    bool fun( ll n, ll m, ll x)
    {
       ll up = n + n*(x-1)/2;
       ll down = n + n*(x-2)/2 + 1;
       if( m>=down && m<=up)
        return true;

        else
            return false;


    }



    int main()
    {
        IOS
        ll t;
        cin>>t;
        while(t--)
        {
            ll n,m;
            cin>>n>>m;


            if( m<n-1)
                {
                cout<<"-1\n";
                continue;
                }
            else if( m> ((n*n+n)/2))
            {
                cout<<"-1\n";
                continue;
            }
            else
            {
                ll high = n;
                ll low = 2;
                ll mid= low + (high-low)/2;


               while( low <=high )
                {
               cout<<low<<' '<<high<<'\n';
                    mid= low + (high-low)/2;
                    if( fun(n,m,mid) )
                    {
                        high=mid-1;
                        mid= high + (high-low)/2;
                    }
                    else
                    {
                        low=mid+1;
                        mid= high + (high-low)/2;
                    }
                }
                  mid= low + (high-low)/2;

                if(fun(n,m,mid))
                   cout<<mid<<'\n';




            }


        }

        return 0;
    }
