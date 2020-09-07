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

        string s;
        cin>>s;
        ll len=s.size();
        vi a(26,0);

        rep(i,0,len)
        {
            if(s[i]!=s[i+1])
                a[s[i]-'a']++;
            else
                i=i+1;
        }
        string ans;
        ans.clear();
        rep(i,0,26)
        {
            if(a[i]>0)
                ans+=i+'a';

        }
        cout<<ans<<'\n';
    }

    return 0;
}
