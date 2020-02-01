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
        ll b,p,f;
        cin>>b>>p>>f;
        ll h,c;
        cin>>h>>c;

        if(h>c)
        {
            ll ham = min(b/2,p);
            ll chi = min( (b-2*ham)/2,f);
            ll ans = h*ham+c*chi;
            cout<<ans<<"\n";

        }
        else if(h==c)
        {
            ll ham = min(b/2,p);
            ll chi = min( (b-2*ham)/2,f);
            ll ans = h*ham+c*chi;
            cout<<ans<<"\n";

        }
        else
        {
            ll chi = min( (b)/2,f);
            ll ham = min((b-2*chi)/2,p);

            ll ans = h*ham+c*chi;
            cout<<ans<<"\n";
        }

    }


    return 0;
}
