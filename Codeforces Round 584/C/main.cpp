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
        vi a(n);
        rep(i,0,n)
        {
            a[i]=s[i]-'0';
        }
        ll f=0;
        if(n>=3){
            rep(i,0,n-2)
            {

                if(s[i]-'0' >s[i+1]-'0' && s[i+1]-'0'>s[i+2]-'0' )
                    {
                        f=1;
                        break;
                    }
            }

        if(f)
            {
                cout<<"-\n";
                continue;
            }
        }


           sort(a.begin(),a.end());
            // rep(i,0,n)
            //cout<<a[i];
           ll last_1=-1,last_2=-1;
           ll pointer=0;
           vi ans;
           rep(i,0,n)
           {
                if(s[i]-'0'>a[pointer])
                    {
                        if(s[i]-'0'>=last_2)
                        {
                            last_2=s[i]-'0';
                            ans.pb(2);
                        }
                        else
                        {
                            f=1;
                            break;
                        }

                    }
                else
                {
                    ans.pb(1);
                    pointer++;
                    last_1=s[i]-'0';
                }
           }
           if(f)
           {
            cout<<"-\n";continue;
           }
           rep(i,0,n)
            cout<<ans[i];

            cout<<'\n';
            //c/out<<"ok";


    }


    return 0;
}

/*
1
12
040425524644

*/
