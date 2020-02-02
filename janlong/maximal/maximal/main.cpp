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
    ll q;
    cin>>q;
    vi a(n);
    rep(i,0,n)
    cin>>a[i];

    rep(i,0,q)
    {
            ll l,r;
            cin>>l>>r;
            if(l==r)
                {
                    cout<<"YES\n";
                }
            else
            {
                ll slope1= a[l-1] - a[l];
                ll slope2 = -(a[r-1] - a[r-2]);
                if(slope1==0 && slope2 == 0)
                    {
                    cout<<"YES\n";
                    }

                else if(slope1 *slope2 >=0)
                    {
                    cout<<"NO\n";
                    }
                else
                    {
                        cout<<"YES\n";
                    }
            }


    }


    return 0;
}
