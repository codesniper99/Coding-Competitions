#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll int
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


    int n,x,y;
    cin>>n>>x>>y;

    vi a(n);

    REP(i,0,n)
    {
        cin>>a[i];
    }

    vi ans(n,0);
    int window= x+y;

    ll start = max(0, -x);
    ll ender= min(y,n-1);

    set<ll>p;

    for(ll z=start;z<=ender;z++)
    {
            p.insert(a[z]);
    }


        ans[0]=(*p.begin());

    for( ll k=1;k<n;k++)
    {

        ll starti = max(k-x,0);
        ll enderi= min(k+y,n-1);

        p.erase(a[starti]);
        p.insert(a[enderi]);



        ans[k]=(*p.begin());


    }

   REP(i,0,n)
    {
        //cout<<ans[i]<<" ";
        if(ans[i]==a[i])
        {
            cout<<i+1<<"\n";
        break;
        }
    }


    return 0;
}
