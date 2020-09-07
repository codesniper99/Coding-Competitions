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
    vi a(n);
    rep(i,0,n)
    {
        cin>>a[i];

    }
    ll cnt1=0;//odd
    ll cnt2=0;
    ll bal=0;
    ll ans=0;
    rep(i,0,n)
    {
        if(a[i]>0)
        {
            if(bal&1)
            {
                cnt1++;//odd
                ans+=cnt2;
            }
            else
                {
                    cnt2++;
                    ans+=cnt1;
                }
        }
        else
        {
            bal++;
            if(bal&1)
                {
                    cnt2++;
                    ans+=cnt2;
                }
            else
                {
                    cnt1++;
                    ans+=cnt1;
                }

        }
       // cout<<ans<<" ";
    }
    cout<<ans<<" "<<(n*n+n)/2-ans<<"\n";


    return 0;
}
