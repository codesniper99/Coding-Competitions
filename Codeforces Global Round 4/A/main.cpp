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
    vi a(n);
    ll limit=0;
    REP(i,0,n)
    {
        cin>>a[i];
        limit+=a[i];
    }
    limit /=2;
    ll sum=a[0];
    ll pos=1;
    vi ans;
    while(sum<=limit && pos<=n-1)
    {
        if(a[0] >= 2*a[pos])
        {
            sum+=a[pos];
            pos++;
            ans.PB(pos);
        }
        else
        {
            pos++;
        }


    }
    if(sum>limit)
    {
        cout<<ans.size()+1<<"\n1 ";
        REP(i,0,ans.size())
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    else
        cout<<"0\n";


    return 0;
}
