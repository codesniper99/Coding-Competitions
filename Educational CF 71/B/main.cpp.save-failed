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
    vvi board(n, vi (m,0));
    rep(i,0,n)
    {
        rep(j,0,m)
            cin>>board[i][j];
    }

    ll k=0;
    vvi board2(n, vi (m,0));
    vpi doa;
    doa.clear();
    rep(i,0,n-1)
    {
      rep(j,0,m-1)
      {
          if( board[i][j] == 0)
          {
              continue;
          }
          else
          {
              if(board2[i][j]==0)
              {
                  if( board[i+1][j]==0 || board[i][j+1]==0 || board[i+1][j+1]==0)
                    continue;
                  else
                  {
                      board2[i][j]=1;
                      board2[i+1][j]=1;
                      board2[i][j+1]=1;
                      board2[i+1][j+1]=1;
                      k++;
                      doa.pb(mp(i,j));

                  }
              }
              else
              {
                  if( board[i+1][j]==0 || board[i][j+1]==0 || board[i+1][j+1]==0)
                    continue;
                 else
                  {
                      board2[i][j]=1;
                      board2[i+1][j]=1;
                      board2[i][j+1]=1;
                      board2[i+1][j+1]=1;
                      k++;
                      doa.pb(mp(i,j));

                  }

              }



          }

      }

    }

    ll f=0;


    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(board[i][j]!=board2[i][j])
            {
                f=1;
                break;
            }

        }
        if(f)
            break;
    }

    ll doable=0;
   if(f)
   {
       cout<<"-1\n";
   }
   else
   {
       cout<<doa.size()<<"\n";
       ll len =doa.size();
       rep(i,0,len)
       {
           cout<<doa[i].first+1<<" "<<doa[i].second+1<<"\n";
       }
   }



    return 0;
}
