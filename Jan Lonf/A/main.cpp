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
        ll s,a,b,c;
        cin>>s>>a>>b>>c;

        ll small;
        ll one=1,two=1;
        ll left  = s- a;
        if(left>=b)
        {
            left = left - b;
            if(left>=c)
            {
                ;

            }
            else
                one++;
        }
        else
        {
            one++;
            left = s-b;
            if(left >=c)
                ;
            else
                one++;

        }
        small=one;
         left  = s- c;
        if(left>=b)
        {
            left = left - b;
            if(left>=a)
            {
                ;

            }
            else
                two++;
        }
        else
        {
            two++;
            left = s-b;
            if(left >=a)
                ;
            else
                two++;

        }
        small = min(small,two);
        cout<<small<<'\n';

    }


    return 0;
}
