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
    ll hist[33];
    memset(hist,0,sizeof(hist));
    rep(i,0,n)
    {
        cin>>a[i];
       ll k=a[i];
       ll counter=0;
       while(k)
       {
            if(k%2==1)
                hist[counter]++;
            counter++;
            k=k/2;

       }

    }
    ll big=0;
    vi ress;
    ress.clear();
    vi collection;
    collection.clear();
    rep(i,0,33)
    {
        if(hist[i]==0)
        {
            ;
        }
        else if(hist[i] == n)
            big+=pow(2,i);
        else
        {
            rep(j,0,n)
            {
                if(a[j]%)
            }
        }

    }
    ll mini=-1000000000000;

    rep(i,0,n)
    {
     ll xr = a[i]^big;
        if(xr >mini)
            mini=xr;
    }
    cout<<mini<<'\n';


    return 0;
}
