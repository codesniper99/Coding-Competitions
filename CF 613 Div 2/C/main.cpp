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
    ll x;
    cin>>x;
    vi f;
    f.clear();
    f.pb(1);
    f.pb(x);
    ll g=sqrt(x);
    rep(i,2,g+1)
    {

        if(x%i==0)
            {
                f.pb(i);
                //cout<<i;
                f.pb(x/i);
            }
    }

    if(g*g==x)
        f.pb(g);

    ll n=f.size();
    //rep(i,0,n)cout<<f[i]<<' ';
    sort(f.begin(),f.end());
    ll a,b;
    ll mini=1000000000000;
    rep(i,0,n/2+1)
    {
    //cout<<f[i]<<' ';
        ll lcm = (f[i]*f[n-1-i])/__gcd(f[i],f[n-1-i]);
         if(lcm==x)
         {
            ll maxx =  max(f[i],f[n-1-i]);
            if(maxx<mini)
            {
                a=f[i];
                b=f[n-1-i];
                mini=maxx;
            }
         }
    }
    if(g*g==x)
    {
     ll lcm = (g*g)/__gcd(g,g);
     if(lcm==x)
        if(g<mini)
            {
            a=g;b=g;mini=g;
            }
    }
    cout<<a<<' '<<b<<'\n';


    return 0;
}
