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
        ll n,g,b;
        cin>>n>>g>>b;
        ll day = ceil((double)n/(double)2);
        ll ans =0;


        ll max_cover = g;
        if(max_cover>=day)
        {
            ans = min(n,max_cover)+max(n-max_cover,0LL);
        }
        else
        {
            ll cycles = ((double)day/(double)g);
            ll bad;

            if(day%g==0)
                bad = (cycles-1)*b;
            else
                bad = cycles*b;

            ans=cycles*g;
            ans+=bad;
            ll reman = max(n-day-bad,0LL);

            if(day%g==0)
                ans+=reman;
            else
            {
                ans+=day%g + reman;

            }

        }
        cout<<ans<<'\n';

    }

    return 0;
}
