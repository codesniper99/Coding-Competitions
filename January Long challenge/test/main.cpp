#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007

ll board[51][51];


bool isSafe(ll x,ll y,ll c,ll n,ll m)
{
    if(x>=0&& x<n && y>=0&& y<m)
    {

        ll topx=x-1,topy=y;
        ll leftx=x,lefty=y-1;
        ll flag=0;
        map<ll,ll> mm;
        if(topx>=0&& topx<n && topy>=0&& topy<m)
            {

                if(leftx>=0&& leftx<n && lefty>=0&& lefty<m)
                {
                    mm[board[leftx][lefty]]++;
                    if(board[leftx][lefty]==board[topx][topy])
                        {
                        flag=1;
                    }
                }
            }

        cout<<"     "<<topx<<"," << topy<<"\n"<<   "   "<<leftx<<","<<lefty<<"\n\n";
      if(flag==1)
            return false;
      else
        return true;


    }
    return false;

}

void print(ll n,ll m)
{
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            cout<<board[i][j]<<' ';
        }
        cout<<"\n";
    }

}
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        REP(i,0,n)
        {
            REP(j,0,m)
            {
                ll color=1;
                while(color<=5)
                {if(isSafe(i,j,color,n,m))
                {
                        board[i][j]=color;
                        break;
                }
                else
                    color++;
                }
            }
        }


        print(n,m);




    }


    return 0;
}
