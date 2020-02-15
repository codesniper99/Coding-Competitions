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

ll dp[100002];
int main()
{
    IOS
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    dp[1]=1;
    string s;
    cin>>s;
    ll n=s.size();
    ll flag=0;
    ll countuu=0;
    ll countnn=0;
    rep(i,0,n)
    {
        if(s[i]=='w'||s[i]=='m')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"0\n";
        return 0;
    }
    vi uu;
    vi nn;
    uu.clear();
    nn.clear();
    ll now=0;
    char last=s[0];
    if(last=='u'||last=='n')
        now++;
    rep(i,1,n)
    {
        if(last=='u')
        {
            if(s[i]=='u')
            {
                now++;
            }
            else if(s[i]=='n')
            {
                uu.pb(now);
                now=1;
            }
            else
            {
                uu.pb(now);

            }

        }
        else if(last=='n')
        {
            if(s[i]=='n')
            {
                now++;
            }
            else if(s[i]=='u')
            {
                nn.pb(now);

                now=1;
            }
            else
            {
                nn.pb(now);

            }
        }
        else
        {

            if(s[i]=='n'||s[i]=='u')
            {
                now=1;
            }
            else
            {
             now=0;
            }
        }
        last=s[i];
    }
    if(now>0)
    {
        if(last=='u')
            uu.pb(now);
        else
            nn.pb(now);
    }

    ll combo=1;
    ll len1=uu.size();
    ll len2=nn.size();
    ll sum[100002];
    memset(sum,0,sizeof(sum));
    sum[0]=1;
    sum[1]=2;

    rep(i,2,100001)
    {
        dp[i] = (sum[i-2]+1)%mod;
        sum[i]=(sum[i-1]+dp[i])%mod;
    }

    rep(i,0,len1)
    {
        //cout<<uu[i]<<' ';
        combo=(((combo)*( dp[uu[i]]   )%mod)%mod);

    }
    rep(i,0,len2)
    {
       // cout<<nn[i]<<' ';
        combo=(((combo)*( dp[nn[i]]   )%mod)%mod);

    }
    cout<<combo%mod<<'\n';

    return 0;
}
