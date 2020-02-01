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

ll dp[2][100002];


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


    dp[0][0] = a[0];
    dp[1][0]= b[0];

    REP(i,1,n)
    {
        dp[0][i] = max( dp[0][i-1],dp[1][i-1]+a[i]);
        dp[1][i] = max( dp[1][i-1],dp[0][i-1]+b[i]);


    }
    cout<< max(dp[0][n-1],dp[1][n-1])<<"\n";

    return 0;
}
