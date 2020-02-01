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
        ll n,m,q;
        cin>>n>>m>>q;
        vi col(m+1,0);
        vi row(n+1,0);
        rep(i,0,q)
        {
            ll u,v;
            cin>>u>>v;
            col[v]++;
            row[u]++;
        }
        ll oc=0;
        ll odr=0;
        rep(i,1,m+1)
        {
            if(col[i]%2==1)
                oc++;

        }
        rep(i,1,n+1)
        {
            if(row[i]%2==1)
                odr++;
        }

        ll answer= oc*(n-odr)+odr*(m-oc);
        cout<<answer<<'\n';

    }


    return 0;
}
