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
        vi primes;
        primes.pb(1);
        primes.pb(n);
        rep(i,2,sqrt(n))
        {
            if(n%i==0)
            {
                primes.pb(i);
                primes.pb(n/i);

            }

        }
        ll x =sqrt(n);
        if(x*x==n)
            primes.pb(x);
        sort(primes.begin(),primes.end());

        ll sz = primes.size();
        ll a,b;
        if(sz==2)
        {
            cout<<"NO\n";continue;
        }
        else
        {
            a=primes[1];
            b=n/a;
        }
    ll c;

            rep(i,2,sqrt(b))
            {
                if(b%i==0 && i!=a )
                {
                    if(b/i !=a && b/i!=i)
                    {
                        c = i;
                        b = b/c;
                        break;
                    }
                }
            }


        if(a>=2 && b>=2 && c>=2 && a!=b && a!=c && b!=c && a*b*c==n)
        {
            cout<<"YES\n"<<a<<' '<<b<<' '<<c<<'\n';
        }
        else
            cout<<"NO\n";


    }
    return 0;
}
