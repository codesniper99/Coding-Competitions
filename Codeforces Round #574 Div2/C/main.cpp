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


bool isValid(ll row, ll col, ll board[50][50],ll rowmax,ll colmax)
{
    return ((row >= 0) && (row < rowmax) &&
           (col >= 0) && (col < colmax) && (board[row][col]==0) );
}

ll n;

ll dp[2][100001];

ll fun(ll updown, ll index, vector<ll> a,vector<ll>b)
{

    if(index==n)
        {
            return 0;
        }

     if( dp[updown][index]!=-1)
     {
         return dp[updown][index];
     }
    if( updown == 0)
    {
            ll x,y;

            x = fun(1,index+1,a,b)+b[index];
            y = fun(0,index+1,a,b);


            return dp[updown][index]= max( x,y);
    }
    else
    {
            ll x,y;
            x = fun(0,index+1,a,b)+a[index];
            y = fun(1,index+1,a,b);

            return dp[updown][index]= max( x,y);

    }


}



int main()
{
    ios::sync_with_stdio(0);

    cin>>n;
    vi a(n);
    vi b(n);
    REP(i,0,n)
    {
        cin>>a[i];
    }

    REP(i,0,n)
    {
        cin>>b[i];
    }

        REP(j,0,n)
        {
            dp[0][j]=-1;
            dp[1][j]=-1;
        }

    cout<< max(fun(0,0,a,b),fun(1,0,a,b))<<"\n";
//cout<<"\n\n";
    //    REP(j,0,n)
    //    {
      //     cout<< dp[0][j]<<" "<<  dp[1][j]<<"\n";
     //   }


    return 0;
}
