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

        ll n,m;
        cin>>n>>m;

        ll digi=m%10;
        ll l = n/m;
        if(digi==1)
        {

            ll ans=0;
            ans+=(l/10)*45;
            l = l%10;
            ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }
        else if(digi==2)
        {
            ll ans=0;
            ans+=(l/5)*20;
            l = l%5;
            ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }

            cout<<ans<<"\n";

        }
        else if( digi==3)
        {
             ll ans=0;
            ans+=(l/10)*45;
            l = l%10;
             ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }
        else if(digi==4)
        {
             ll ans=0;
            ans+=(l/5)*20;
            l = l%5;
             ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }
        else if(digi==5)
        {
             ll ans=0;
            ans+=(l/2)*5;
            l = l%2;
             ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }
        else if(digi==6)
        {
             ll ans=0;
            ans+=(l/5)*20;
            l = l%5;
                    ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }else if(digi==7)
        {
             ll ans=0;
            ans+=(l/10)*45;
            l = l%10;

            ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }else if(digi==8)
        {
             ll ans=0;
            ans+=(l/5)*20;
            l = l%5;

             ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }else if(digi==9)
        {
             ll ans=0;
            ans+=(l/10)*45;
            l = l%10;

            ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }
        else
        {
            ll ans=0;
            ans+=(l/1)*0;
            l = l%1;
             ll temp=digi;
            rep(i,0,l)
            {
                ans+=temp%10;
                temp+=digi;
            }
            cout<<ans<<"\n";
        }




    }

    return 0;
}
