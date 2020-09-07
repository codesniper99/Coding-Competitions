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
        ll a,b,c;
        cin>>a>>b>>c;
        double z=0;
        ll ans=0;
        double sq = sqrt(b);
        rep(i,1, min(sq ,(double)a)+1)
        {
            double right = ceil( (double)b/(double)i);
            cout<<right<<" ";
            ans+=max(z,ceil((double)c-right));
        }
        cout<<"\n";
        rep(i,1, min(sq ,(double)c)+1)
        {
            ll right = ceil( (double)b/(double)i);
            cout<<right<<" ";
            ans+=max(z,ceil((double)a-right));
        }

        ans+=max(z,a-sq)* max(z,c-sq);
        cout<<ans<<'\n';


    }


    return 0;
}









