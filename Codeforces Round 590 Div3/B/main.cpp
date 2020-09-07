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
    ll n,k;
    cin>>n>>k;
    queue<ll>q;
    map<ll,ll>present;
    present.clear();
    vi a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    rep(i,0,n)
    {
        if(present[a[i]]==1)
            continue;
        else
        {
            //cout<<q.size()<<' ';
            if(q.size()==k)
            {

            ll t=q.front();
            present[t]=0;
            q.pop();

            q.push(a[i]);
            present[a[i]]=1;
            }
            else
            {
                q.push(a[i]);
                present[a[i]]=1;

            }
        }

    }

    vi v;
    ll g=q.size();
    ll t=min(g,k);
    rep(i,0,t)
    {
        v.pb(q.front());
        q.pop();

    }
    ll len=v.size();
    cout<<t<<'\n';
    rep(i,0,len)
    {
        cout<<v[len-1-i]<<' ';
    }
    cout<<'\n';

    return 0;
}
