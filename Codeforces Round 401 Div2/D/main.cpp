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
   // IOS
    ll n;
    cin>>n;
    vector<string>vs(n);
    vs.clear();
    rep(i,0,n)
    {
        cin>>vs[i];
    }
    if(n==1)
    {
        cout<<vs[0]<<"\n";
        return 0;
    }
    vector<string>ans;
    ans.clear();
    ans.pb(vs[n-1]);

    string lasts = vs[n-1];
    for(ll i=n-2; i>=0;i--)
    {
        string p =vs[i];
        ll len = min(p.size(),lasts.size());
        //cout<<len<<'\n';
        string next;
        next.clear();
        ll f=0;
        rep(j,0,len)
        {

            if(p[j]<lasts[j])
                {
                    next=p;
                    break;
                }
            else if(p[j]==lasts[j])
            {
                next+=p[j];
                 //   f=1;
            }

            else
                {f=1;break;}
        }


        lasts=next;
        ans.pb(next);

    }
    ll len3=ans.size();
    for(ll i=len3-1;i>=0;i--)
    {
        cout<<ans[i]<<'\n';
    }

    return 0;
}
