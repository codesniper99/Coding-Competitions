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

        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll sum =n+a+b+c;
        if(sum%3!=0)
        {
            cout<<"NO\n";continue;
        }
        else
        {
           ll amt = sum/3;
            if(amt-a<0 || amt-a>n ||amt-b<0 || amt-b>n||amt-c<0 || amt-c>n)
            {

                cout<<"NO\n";
                continue;
            }
            cout<<"YES\n";
        }
    }

    return 0;
}
