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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        cin>>a;
        ll s=0;
        ll lmao = pow(10,n);
        s = 2*lmao;
        s+=a;
        cout<<s<<'\n'<<flush;

        ll b ;
        cin>>b;

        cout<<lmao-b<<'\n'<<flush;

        ll d;
        cin>>d;
        cout<<pow(10,n)-d<<'\n'<<flush;

        ll x;
        cin>>x;
        if(x==-1)
                return 0;


    }

    return 0;
}
