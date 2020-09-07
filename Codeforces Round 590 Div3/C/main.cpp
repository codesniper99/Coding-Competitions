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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        string up;
        cin>>up;
        string down;
        cin>>down;

        ll posx=0;
        ll posy=0;
        ll flag=0;
        ll coming=0;//0 hori 1 ver
        while(flag==0 )
        {
            if(posx==n && posy==1)
            {
                flag=1;
                break;
            }
            if(posy==0)
            {
                char c=up[posx];
                int type=c-'0';
                if(type==1||type==2)
                    posx++;
                else
                    {
                        posy=1;
                        if(down[posx]-'0'<=2)
                        {
                            flag=2;
                            break;
                        }
                        else
                        {
                            posx++;
                        }
                    }
            }
            else
            {
               char c=down[posx];
                int type=c-'0';
                if(type==1||type==2)
                    posx++;
                else
                    {
                        posy=0;
                        if(up[posx]-'0'<=2)
                        {
                            flag=2;
                            break;
                        }
                        else
                        {
                            posx++;
                        }
                    }

            }

            if(posx>n ||posy>1||posy<0||posx<0)
            {
                flag=2;
                break;
            }

        }
        if(flag==1)
        {
            cout<<"YES\n";

        }
        else
            cout<<"NO\n";

    }

    return 0;
}
