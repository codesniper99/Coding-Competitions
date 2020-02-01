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
#define big 1000000000000000000
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
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;

        vvi cost(n, vi(2,0));

        cost[0][0]=a+b;

        cost[0][1]=big;


        rep(i,1,n)
        {
            if(s[i]=='0')
            {
                cost[i][0] = min ( cost[i-1][0] + (a+b) , cost[i-1][1]+ 2*a +2*b);
                cost[i][1] = min(cost[i-1][0]+ 2*a +2*b , cost[i-1][1] +a+2*b);
            }
            else
            {
                cost[i][0] =big;
                cost[i][1] = min( cost[i-1][0] + 2*(a+b) , cost[i-1][1] + a+2*b);
            }

        }

        cout<<cost[n-1][0]+b<<"\n";

    }


    return 0;
}
