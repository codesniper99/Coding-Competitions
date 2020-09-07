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
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        vi a(n);
        rep(i,0,n)
            cin>>a[i];
        ll ans=1;
        rep(i,1,n)
        {
            ll a1,a2,a3,a4,a5;
            if(i>=1)
                a1=a[i-1];
            else
                a1=INF;
             if(i>=2)
                a2=a[i-2];
            else
                a2=INF;
             if(i>=3)
                a3=a[i-3];
            else
                a3=INF;
             if(i>=4)
                a4=a[i-4];
            else
                a4=INF;
             if(i>=5)
                a5=a[i-5];
            else
                a5=INF;

            if(a[i]<a1 &&a[i]<a2 && a[i]<a3 && a[i]<a4 && a[i]<a5)
                ans++;

        }
        cout<<ans<<'\n';

    }


    return 0;
}
