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

vector<ll>val [200001];

int main()
{
    IOS
    ll n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    set<ll> xs;
    ll ans=INF;
    xs.clear();
    rep(i,0,n){
        ll x=a[i];
        ll cur=0;
        while(x)
        {
            xs.insert(x);
            val[x].pb(cur);
            x=x/2;
            cur++;
        }
    }
    for( auto x:xs)
    {
        if(val[x].size()>=k)
        {
            sort(val[x].begin(),val[x].end());
            ll sum=0;
            rep(i,0,k)
            {
                sum+=val[x][i];
            }
            if(sum<ans)ans=sum;
        }

    }
cout<<ans<<"\n";
    return 0;
}
