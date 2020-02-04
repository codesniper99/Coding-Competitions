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
        ll n;
        cin>>n;
        string s;
        s.clear();
        map<ll,vector<ll> >m;
        m.clear();
        ll fl=0;
        map<ll,ll>f;

        vector<ll> lis;
        rep(i,0,n)
            {
               ll x,y;
               cin>>x>>y;
               m[x].push_back(y);
                if(f[x]==0)
                {
                    lis.push_back(x);
                    f[x]=1;
                }
                else
                    ;
            }
        ll g =lis.size();
        ll cury=0;
        sort(lis.begin(),lis.end());

        rep(i,0,lis[0])
        {
            s.append("R");
        }
        sort(m[lis[0]].begin(),m[lis[0]].end());
        vi gg = m[lis[0]];

        rep(i,0,gg[0])
           s.append("U");

        cury = gg[0];

        rep(i,0,g-1)
        {
            //cout<<cury<<'\n';
            sort(m[lis[i]].begin(),m[lis[i]].end());
            ll sz = m[lis[i]].size();
            vi ff=m[lis[i]];
            if(cury >ff[0])
            {
                fl=1;
                break;
            }
            else
                {
                    // cout<<ff[sz-1]<<ff[0]<<'\n';
                    for(ll k=cury;k<ff[sz-1];k++)
                        s.append("U");

                    cury = ff[sz-1];
                }
            for(ll k=0;k<lis[i+1]-lis[i];k++)
                s.append("R");
        }

        vi ff=m[lis[g-1]];
        sort(ff.begin(),ff.end());
        ll sz=ff.size();
        //cout<<cury<<ff[0]<<'\n';
        if(cury>ff[0])
            fl=1;
        rep(i,cury,ff[sz-1])
            s.append("U");

        if(fl)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            cout<<s<<'\n';

        }

    }


    return 0;
}
