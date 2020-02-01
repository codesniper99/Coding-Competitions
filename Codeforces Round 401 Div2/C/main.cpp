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

    ll n,m;
     cin>>n>>m;
     vvi g(n,vi (m,0));
     rep(i,0,n)
     {
         rep(j,0,m)
         {
             cin>>g[i][j];
         }
     }
     vpi range;
     range.clear();
     rep(i,0,m)
     {
         ll left=1;
         ll right=1;
         ll last=g[0][i];
         rep(j,1,n)
         {
             if(g[j][i]>=last)
             {
                 right++;
                 last=g[j][i];
             }
             else
             {

                 range.pb({left,right});
                 right++;
                 left=right;
                 last=g[j][i];
             }

         }

             range.pb({left,right});


     }
     ll len=range.size();

     ll k;
     cin>>k;
     vpi query;
     query.clear();

     ll maxi[n+1];
     memset(maxi,0,sizeof(maxi));
     rep(i,0,len)
     {
         ll neww = range[i].second;
         if( neww >= maxi[range[i].first])
         {
             maxi[range[i].first]=neww;
         }
      }


    rep(i,2,n+1)
    {
        if(maxi[i]<=maxi[i-1])
        {
            maxi[i]=maxi[i-1];
        }

    }
     rep(i,0,k)
     {
         ll u,v;
         cin>>u>>v;
         if(maxi[u]>=v)
            cout<<"Yes\n";
         else
            cout<<"No\n";

     }




    return 0;
}
