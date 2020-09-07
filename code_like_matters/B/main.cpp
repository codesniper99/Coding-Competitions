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
        vector<string>vs(n);
        vi len(n);
        ll z=0;
        ll one=0;
        rep(i,0,n)
            {
                string s;
                cin>>s;
                vs[i]=s;
                len[i]=s.size();

                rep(j,0,len[i])
                {
                    if(s[j]=='0')
                        z++;
                    else
                        one++;
                }


            }
            ll ans=0;
            sort(len.begin(),len.end());
            rep(i,0,n)
            {
                if(len[i]%2==0)
                {
                    if(z>=len[i] )
                     {
                         ans++;
                         z-=len[i];
                     }
                     else if(one>=len[i])
                     {
                         ans++;
                         one-=len[i];
                     }
                     else
                     {
                        if(z%2==1 || one%2==1)
                        {
                            z=0;
                            one=0;
                        }
                        else
                        {
                            one=0;
                            z=0;
                            ans++;
                        }


                     }
                }
                else
                {
                    if(z%2==1)
                    {
                        if(z>=len[i])
                        {
                            ans++;
                            z-=len[i];
                        }
                        else
                        {
                            one-=len[i]-z;
                            z=0;
                            ans++;
                        }
                    }
                    else if(one%2==1)
                    {
                        if(one>=len[i])
                        {
                            ans++;
                            one-=len[i];
                        }
                        else
                        {
                            z-=len[i]-one;
                            one=0;
                            ans++;
                        }

                    }
                    else
                    {
                        if(z>=len[i])
                        {
                            z-=len[i];
                            ans++;
                        }
                        else if(one>=len[i])
                        {
                            one-=len[i];
                            ans++;
                        }
                        else
                        {
                            one-=len[i]-z;
                                z=0;
                        }

                    }

                }

            }
        cout<<ans<<'\n';

    }


    return 0;
}
