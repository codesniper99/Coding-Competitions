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
    //IOS
    ll n;
    cin>>n;
    string s,m;
    cin>>s>>m;
    map<ll,ll>ma;
    ma.clear();
    map<ll,ll>ma2;
    ma2.clear();

    vi descs;
    vi desc2s;
    vi descm;
    vi desc2m;

    rep(i,0,n)
    {
        ma[m[i]-'0']++;
        ma2[m[i]-'0']++;

        descs.push_back(s[i]-'0');
        desc2s.push_back(s[i]-'0');

        descm.push_back(m[i]-'0');
        desc2m.push_back(m[i]-'0');

        //se2.insert(s[i]-'0');
    }

    sort(descs.begin(),descs.end(),greater<int>());
    sort(desc2s.begin(),desc2s.end(),greater<int>());
    sort(descm.begin(),descm.end(),greater<int>());
    sort(desc2m.begin(),desc2m.end(),greater<int>());

    ll mini=0;
    ll maxi=0;
    ll up=0;
    ll down=n-1;
     rep(i,0,n)
    {
            ll f=0;

            ll top =descs[i];
            //cout<<top;
            for(ll j=9;j>=top;j--)
            {

                if(ma[j]>0)
                {

                    ma[j]--;
                    f=1;
                    break;
                }


            }

            //cout<<f;

            if(f==0)
            {

                 mini++;
                 ma[descm[down]--];
                 down--;
            }


    }
    up=0;
    down=n-1;
    rep(i,0,n)
    {
            ll f=0;

            ll top =desc2s[up];
            //cout<<top;
            for(ll j=9;j>top;j--)
            {

                if(ma2[j]>0)
                {
                    //cout<<j<<" "<<top<<'\n';
                    ma2[j]--;
                    f=1;
                    break;
                }


            }

            //cout<<f;
            up++;
            if(f==1)
            {
                 maxi++;

            }
            else
            {
                ma2[desc2m[down]--];
                 down--;


            }


    }

    cout<<mini<<"\n"<<maxi<<"\n";

    return 0;
}
