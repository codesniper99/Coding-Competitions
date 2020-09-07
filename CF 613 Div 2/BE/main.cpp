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
ll maxSubArraySum(vi &a)
{
    ll max_so_far = LONG_MIN, max_ending_here = 0;
ll n=a.size();
//rep(i,0,n)
//cout<<a[i];
    for (ll i= 0; i < n; i++)
    {

        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
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
        vi a(n);a.clear();
        ll f=0;
        vi b(n-1),c(n-1);
        b.clear();
        c.clear();
        ll s=0;
        rep(i,0,n)
        {
            cin>>a[i];
            s+=a[i];
        }
        rep(i,0,n-1)
            b.pb(a[i]);
        rep(i,1,n)
            c.pb(a[i]);

        ll tt = maxSubArraySum(b);
      // cout<<tt;
        ll res = max(maxSubArraySum(b),maxSubArraySum(c));
        //cout<<res<<' '<<s;
        if(res>=s)
            cout<<"NO\n";
        else
            cout<<"YES\n";




}

    return 0;
}
