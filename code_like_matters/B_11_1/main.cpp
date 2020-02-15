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
        ll r,p,s;
        ll n;
        cin>>n;
        cin>>r>>p>>s;
        string se;
        cin>>se;
        ll len=se.size();
        ll wins=0;
        ll r2=0,p2=0,s2=0;

        rep(i,0,len)
        {
            if(se[i]=='R')
            {
                r2++;
            }
            else if(se[i]=='P')
            {
                p2++;

            }
            else
                s2++;

        }

        ll maxi=0;
        maxi = min(r,s2)+min(p,r2)+min(s,p2);

        if(maxi>=ceil((double)len/(double)2))
        {

            vector<char> ans(len);
            ans.clear();
            ll freer=r-min(r,s2);
            ll freep=p-min(p,r2);
            ll frees=s-min(s,p2);

            rep(i,0,len)
            {
                if(se[i]=='R')
                {
                    if(p>0)
                    {
                        p--;
                        ans[i]='P';

                    }
                    else
                    {
                        if(freer>0)
                        {
                            r--;
                            ans[i]='R';
                            freer--;

                        }
                        else
                        {
                            s--;
                            frees--;
                            ans[i]='S';

                        }

                    }
                }
                else if(se[i]=='P')
                {
                     if(s>0)
                    {
                        s--;
                        ans[i]='S';

                    }
                    else
                    {
                        if(freer>0)
                        {
                            r--;
                            ans[i]='R';
                            freer--;
                        }
                        else
                        {
                            p--;
                            ans[i]='P';
                            freep--;
                        }

                    }
                }
                else
                {

                     if(r>0)
                    {
                        r--;
                        ans[i]='R';

                    }
                    else
                    {
                        if(frees>0)
                        {
                            s--;
                            ans[i]='S';
                            frees--;
                        }
                        else
                        {
                            p--;
                            ans[i]='P';
                            freep--;
                        }

                    }
                }
            }
            cout<<"YES\n";
            rep(i,0,len)
            {
                cout<<ans[i];
            }
            cout<<'\n';

        }

        else
        {
            cout<<"NO\n";
            continue;
        }

    }

    return 0;
}
