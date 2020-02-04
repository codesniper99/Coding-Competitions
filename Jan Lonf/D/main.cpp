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

bool safe(ll i, ll j, ll n, ll m, ll len)
{
     if((i-len>=0) && (i-len <=n-1) && (i+len>=0) && (i+len<=n-1) &&(j-len>=0) && (j-len<=m-1) && (j+len>=0)&&(j+len<=m-1))
                       return true;
    else return false;

}

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll> >a(n,vector<ll>(m,0));
        a.clear();
        rep(i,0,n)
        {
            rep(j,0,m)
                cin>>a[i][j];
        }
        ll res=n*m;

        rep(i,0,n)
        {
            rep(j,0,m)
            {
                ll len=1;
                while(safe(i,j,n,m,len))
                    {
                        if((a[i-len][j]==a[i+len][j]) && (a[i][j-len] == a[i][j+len]))
                            res++;
                        else
                            break;
                        len++;

                }
            }
        }
        cout<<res<<'\n';

    }


    return 0;
}
