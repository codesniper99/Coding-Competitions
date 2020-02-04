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

ll fun(ll x)
{
    vector<ll>primes;
    primes.clear();
    ll ph = x;
    for(ll i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            primes.pb(i);
            while(x%i==0)
                x/=i;
           // cout<<i<<'\n';
        }

    }
    if(x>1)
        primes.pb(x);

    ll len=primes.size();
    ll val = ph;
    rep(i,0,len)
    {
        //cout<<primes[i]<<' ';
        val/=primes[i];
        val*= primes[i]-1;

    }

    return val;

}

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {

        ll a,m;
        cin>>a>>m;
        ll g= __gcd(a,m);
        ll phi = m/g;
        cout<<fun(phi)<<'\n';
    }

    return 0;
}
