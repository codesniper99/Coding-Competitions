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
        ll n,s;
        cin>>n>>s;
        vpi range(n);
        range.clear();
        rep(i,0,n)
        {
            ll u,v;
            cin>>u>>v;
            range[i]=mp(v,u);

        }
        sort(range.begin(),range.end());
        ll left=s;
        vi sals(n,0);
        rep(i,0,n)
        {
            left-=range[i].se;
            sals[i]=range[i].se;
        }
        ll pos=n-1;
        if(n>=2){
        for(ll i=n-2;i>=(n-1)/2;i--)
        {
            if(left<=0)
                break;
            if(sals[i+1]>sals[i])
            {
                sals[i]+=min(sals[i+1],range[i].fi);
                left-=min(sals[i+1],range[i].fi);
            }
            else
                continue;
        }

        if(left>0)
        {
            ll modd = left/((n+1)/2);
            cout<<'y'<<min(range[(n-1)/2].fi,modd+sals[(n-1)/2])<<'\n';

        }
        else
        {
            sort(sals.begin(),sals.end());
            cout<<sals[(n-1)/2]<<'\n';
        }
        }
        else
        {
            cout<<s<<'\n';
        }


    }

    return 0;
}
