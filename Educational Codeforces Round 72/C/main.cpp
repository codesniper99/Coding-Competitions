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
    string s,t;
    cin>>s>>t;
    vi down,up;
    ll aa=0,ab=0;
    rep(i,0,n)
    {
        if(s[i]=='a')
            aa++;
        if(t[i]=='a')
            ab++;

    }
    if((aa+ab )%2!=0)
        cout<<"-1\n";
    else
    {
        rep(i,0,n)
        {
            if(s[i]==t[i])
                continue;
            else
            {
                if(s[i]=='b')
                    down.pb(i+1);
                else
                    up.pb(i+1);
            }

        }
        ll len1=up.size();
        ll len2=down.size();

        ll count=0;
        vpi ans;
        ans.clear();
        for(ll i=0;i<len1;i+=2)
        {
            if(i<len1 && i+1<len1)
            {
                count++;
                ans.pb(mp(up[i],up[i+1]));

            }

        }
        for(ll i=0;i<len2;i+=2)
        {
            if(i<len2 && i+1<len2)
            {
                count++;
                ans.pb(mp(down[i],down[i+1]));

            }

        }
        if(len1%2==1)
        {
            count++;
            ans.pb(mp(up[len1-1],up[len1-1]));
            count++;
            ans.pb(mp(up[len1-1],down[len2-1]));
        }

        cout<<count<<'\n';
        ll len3=ans.size();
        rep(i,0,len3)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";

        }

    }


    return 0;
}
