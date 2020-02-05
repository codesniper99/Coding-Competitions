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
    string s;
    cin>>s;
    char l1,l2;
    if(n<=2)
        {
            if(n==2)
            cout<<"YES\n01\n";
            else
                cout<<"YES\n0\n";
        }
    else
    {
        l1 = s[0];
        l2 = s[1];
        string ans;
        ans.clear();
        ans+="0";
        ll f=0;
        rep(i,1,n)
        {
            char cur = s[i];
            if(cur>=l1)
            {
                l1 =cur;
                ans+="0";
            }
            else if(f==0)
            {
                f=1;
                l2=cur;
                ans+="1";
            }
            else if(cur>=l2)
            {
                l2 =cur;
                ans+="1";
            }
            else
            {
                cout<<"NO\n";break;
            }

        }
        if(ans.size()==n)
            {cout<<"YES\n"<<ans<<'\n';}


    }





    return 0;
}
