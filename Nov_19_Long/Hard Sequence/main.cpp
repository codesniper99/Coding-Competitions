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

ll seq[129];
int main()
{
    IOS
    ll t;
    cin>>t;
    memset(seq,0,sizeof(seq));

    map<ll,ll> cnt;
    cnt.clear();
    map<ll,ll> pos;
    pos.clear();
    map<ll,ll>spos;
    spos.clear();
    cnt[0]=1;
    pos[0]=0;
    spos[0]=0;
    ll last=0;
    rep(i,1,129)
    {
        if(cnt[last]==1 )
        {
            seq[i]=0;
            cnt[0]++;
            spos[0] = pos[0];
            pos[0]=i;
        }
        else
        {
            seq[i] = pos[last] -spos[last];
            cnt[seq[i]]++;
            spos[seq[i]]=pos[seq[i]];
            pos[seq[i]]=i;

        }
        last=seq[i];


    }

    while(t--)
    {
        ll n;
        cin>>n;
        ll count=0;
        rep(i,0,n)
        {
            //cout<<seq[i]<<' ';
            if(seq[i]==seq[n-1])
            {
                count++;
            }
        }
       // cout<<endl;
        cout<<count<<'\n';

    }


    return 0;
}
