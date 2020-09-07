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
bool visited[101];
void mark(ll x, vi a, ll n)
{
    visited[x]=true;
    rep(i,x+1,n)
    {
        if(a[i]%a[x]==0)
            visited[i]=true;
    }
}

int main()
{
    IOS
    ll n;
    cin>>n;
    memset(visited,0,sizeof(visited));
    vi a(n);
    rep(i,0,n)
    {cin>>a[i];
    }
    sort(a.begin(),a.end());

    ll mini=0;
    rep(i,0,n)
    {
        if(!visited[i])
        {
            mark(i,a,n);
            mini++;
        }
    }
    cout<<mini<<'\n';






    return 0;
}
