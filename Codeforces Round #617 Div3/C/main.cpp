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
        cin>>s;

        ll curx=0,cury=0;
        map<pair<ll,ll> ,pair<ll,ll>> m;
        pair<ll,ll>temp;
        temp.first =0;
        temp.second =0;
        m[temp] = {1,0};
        ll ans=LONG_MAX;
        pair<ll,ll>anss;
        rep(i,0,n)
        {
            pair<ll,ll> newp;
            if(s[i]=='L')
                curx++;
            else if(s[i]=='R')
                curx--;
            else if(s[i]=='U')
                cury++;
            else
                cury--;
            newp={curx,cury};
            m[newp].first++;
            if(m[newp].first>1)
            {
            //    if(m[newp]second==0)
             //       m[newp].second=1;
               // ans = min(ans, i - m[newp].second +1);
                if(ans> (i-m[newp].second+1))
                {   ans = i-m[newp].second+1;
                    anss.first = m[newp].second;
                    anss.second = i;
                }
            }
            m[newp].second = i+1;

        }
        if(ans==LONG_MAX)
            cout<<"-1\n";
        else
            cout<<anss.first+1<<' '<<anss.second+1<<'\n';



    }


    return 0;
}
