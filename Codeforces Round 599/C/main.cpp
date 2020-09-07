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
    ll n;
    cin>>n;
    if(n==1)
        {cout<<"1\n";
    return 0;}
    vi factors;
    factors.clear();
    map<ll,ll>m;
    m.clear();
    rep(i,2,sqrt(n))

    {
        if(n%i==0)
        {
            factors.pb(i);
            factors.pb(n/i);
            m[i]=1;
            m[n/i]=1;
        }
    }
    if(ceil(sqrt(n))==floor(sqrt(n)))
    {
        m[sqrt(n)]=1;
        factors.pb(sqrt(n));
    }
    sort(factors.begin(),factors.end());

    ll len=factors.size();
    ll ans=1;
    rep(j,0,len)
    {

        ll big = n/factors[j];
        ll g=0;
        rep(i,1,big)
        {
            if(m[i*factors[j]]==1)
                continue;
            else
            {
                g=1;
                break;
            }
        }
        if(g==1)
        {
            ans=1;
            break;
        }
        else
        {
            if(factors[j]>ans)
                ans=factors[j];
        }
    }
    if(ans!=1)
    cout<<ans<<'\n';
    else
        cout<<n<<'\n';

    return 0;
}
