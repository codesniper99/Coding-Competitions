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

ll power(ll x,ll y, ll z)
{
    ll res=1;
    x=x%z;
    while(y>0)
    {
        if(y&1 == 1)
        {
            res = (res * x)%z;

        }
        y = y/2;
        x= (x*x)%z;

    }
    return res;

}

int main()
{
    ios::sync_with_stdio(0);
    ll h,w;
    cin>>h>>w;
    cout<<power(2,h+w,998244353)<<"\n";



    return 0;
}
