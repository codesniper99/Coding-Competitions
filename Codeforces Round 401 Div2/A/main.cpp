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
    ll n,x;
    cin>>n>>x;
    n = n%6;
    int ar1[] ={0,1,2,2,1,0};
    ll ar2[] ={1,0,0,1,2,2};
    ll ar3[] ={2,2,1,0,0,1};

    if(ar1[n]==x)
    {
        cout<<"0\n";
    }
    else if(ar2[n]==x)
    {
        cout<<"1\n";
    }
    else
        cout<<"2\n";


    return 0;
}
