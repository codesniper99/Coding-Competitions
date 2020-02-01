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
    ll left=0,right=0;
    ll leftsum=0,rightsum=0;
    ll sumdiff=0;
    rep(i,0,n)
    {
        if(i<n/2)
        {
            if(s[i]=='?')
                left++;
            else
                {leftsum+=s[i]-'0';sumdiff+=s[i]-'0';}
        }
        else
        {
            if(s[i]=='?')
                right++;
            else
                {sumdiff-=s[i]-'0';rightsum+=s[i]-'0';}

        }


    }
    sumdiff=abs(leftsum-rightsum);
    if(sumdiff==0)
    {
        if(left==right)
            cout<<"Bicarp\n";
        else
            cout<<"Monocarp\n";
    }
    else
    {
        ll pairs=left/2;
        leftsum+=9*pairs;
        ll pairs2=right/2;
        rightsum+=9*pairs2;

        sumdiff=abs(leftsum-rightsum);
        left=left%2;
        right=right%2;
        if(sumdiff==0)
        {
            if(left==right)
                cout<<"Bicarp\n";
            else
                cout<<"Monocarp\n";
        }
        else if(sumdiff<=9)
        {
                cout<<"Monocarp\n";
        }
        else
            cout<<"Monocarp\n";
    }


    return 0;
}
