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

int main()
{
    ios::sync_with_stdio(0);

    ll n;
    cin>>n;
     string a;
     cin>>a;
     ll dp[11];
     REP(i,0,9)
     {
         cin>>dp[i+1];
     }
    ll turn=0;ll last=-2;
    REP(i,0,n)
    {
        if(last==-2)
        {
            if(a[i]-'0'==dp[a[i]-'0'] )
                ;
            else if(a[i]-'0'<dp[a[i]-'0'] )
            {a[i]='0'+dp[a[i]-'0'];
            last=i;
        }
        }
        else if((i-last==1))
        {
           if(a[i]-'0'<=dp[a[i]-'0'] )
            {a[i]='0'+dp[a[i]-'0'];
            last=i;
        }
        }

    }

    cout<<a;
    return 0;
}
/*3
456
1 2 3 4 3 9 8 8 8
*/
