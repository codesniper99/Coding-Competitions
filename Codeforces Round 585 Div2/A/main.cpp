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
    ll a1,a2;
    ll k1,k2;
    ll n;
    cin>>a1>>a2>>k1>>k2>>n;

    ll ans;
    ll z=0;
    ans=min(a1+a2,max( n- (a1*(k1-1)+a2*(k2-1)),0ll));
    cout<<ans<<" ";
    if(k1<=k2)
    {
        ll t=n/k1;

        ll ans2 = min(a1,t);
         ll ans3 = min(a2, (n-ans2*k1)/k2);
        cout<<ans2+ans3<<'\n';
    }
    else
    {
         ll t=n/k2;
         ll ans2 = min(a2,t);
         ll ans3 = min(a1, (n-ans2*k2)/k1);
         cout<<ans3+ans2<<'\n';

    }

    return 0;
}
