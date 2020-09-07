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
        vi odd;
        string even;
        even.clear();
        rep(i,0,len)
        {
            ll dig = s[i]-'0';
            if(dig%2==1)
                odd.pb(dig);
            else
                even+=s[i];
        }
        ll len2=odd.size();
        ll len3=even.size();
        ll last=0;
        ll count=0;
        ll lastodd=0;
        string ans;
        ans.clear();
        while(count!=len2&& last!=len3)
        {
            if(even[last]-'0'> odd[lastodd])
            {
                ans+=odd[lastodd]+'0';
                lastodd++;

                count++;
            }
            else
            {
                ans+=even[last];
                last++;
            }

        }
        for(ll i=count;i<len2;i++)
        {
            ans+=odd[lastodd]+'0';
            lastodd++;
        }
        for(ll i=last;i<len3;i++)
        {
            ans+=even[i];

        }
        cout<<ans<<'\n';
    }


    return 0;
}
