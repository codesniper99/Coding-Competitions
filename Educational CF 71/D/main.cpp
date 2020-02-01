#include <bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define mod 998244353
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

ll dp[400001];

int main()
{
    IOS

    memset(dp,-1,sizeof(dp));
    dp[0]=1;

    ll n;
    cin>>n;

    rep(i,1,n+1)
    {
        dp[i] = ((dp[i-1]%mod)*(i%mod))%mod;
        //cout<<dp[i]<<" ";
    }

    vpi a(n);

    vi f1(n+1,0);
    vi f2(n+1,0);
    vi f3(n+1,0);


    rep(i,0,n)
    {
        cin>>a[i].first>>a[i].second;

        f1[a[i].first]++;
        f2[a[i].second]++;
    }


    ll d1=1;
    ll d2=1;

    rep(i,0,n+1)
    {
        //cout<<f1[i]<<" ";
            d1 = ((d1%mod) *(dp[f1[i]]%mod))%mod;
       // cout<<d1<<" oo";
    }


    rep(i,0,n+1)
    {
            d2 = ((d2%mod)*(dp[f2[i]]%mod));
    }

    sort(a.begin(),a.end());
    ll multi = 1;
    rep(i,0,n-1)
    {
        if(a[i].second>a[i+1].second)
            multi=0;
    }
    ll j=0;
    for(ll i=0; i<n; i=j)
    {

        while(j<n && a[i]==a[j])
            j++;

        multi=  ((multi%mod)*(dp[j-i]%mod))%mod;
    }

    ll ans = (dp[n]%mod - ( d1%mod + d2%mod - (multi)%mod) )%mod;
    //cout<<dp[n]<<" "<<d1<<" "<<d2<<" "<<multi<<"\n";

        if(ans<0)
            cout<<mod+ans<<"\n";
        else
        cout<<ans<<"\n";



    return 0;
}
