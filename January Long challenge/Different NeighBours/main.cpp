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


bool graphColor(ll x[][],ll n,ll m,ll x_cord,ll y_cord)
{

    if(x_cord==n&& y_cord==m)
    {
        return true;
    }
    else
    {
        for(ll i=1;i<5;i++)
        {

            if(isSafe(board,x_copip install django-pagedownrd,y_cord,i))
            {
                board[x_cord][y_cord]=i;

                if(graphColor(board,n,m,x_cord+1,y_cord) && x_cord<m)
                    return true;


            }
        }



    }
    return false;
}



void solve(ll n,ll m)
{
   if(graphColor(board,n,m)==false)
   {
       cout<<"-1\n";
   }
   else
   {
       printboard(n,m);
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
        solve(n,m);
    }




    return 0;
}
