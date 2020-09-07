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

vi factors(ll a)
{
    vi ans;
    ans.clear();
    rep(i,1,sqrt(a))
    {
        if(a%i==0)
        {
            ans.pb(i);
            ans.pb(a/i);
        }

    }
    ll g= sqrt(a);
    if(g*g==a)
        ans.pb(g);
    return ans;

}


void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    vi mover(1000001,0);
    ll answer=0;
    rep(i,0,n)
    {
        ll c = mover[a[i]];
        if(c>=answer)
            answer=c;

        vi x = factors(a[i]);
        ll len=x.size();
        rep(j,0,len)
        {

            mover[x[j]]++;
        }


    }
    cout<<answer<<'\n';


}

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
