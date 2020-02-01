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

    ll n,k;
    cin>>n>>k;
    vi a(n);
    a.clear();
    map<ll,ll> f;
    f.clear();
    ll ans=0;
    ll total = ceil(float(n)/float(2));

    REP(i,0,n)
    {
        cin>>a[i];
       f[a[i]]++;
    }
    ll pairs=0;
    ll lone=0;
    for( auto i:f)
    {
        pairs+=i.second/2;
        lone += i.second%2;
    }
    while(total>0)
    {
        if(pairs>0)
        {
            pairs--;
            ans+=2;
            total--;
        }
        else
        {
            lone--;
            ans+=1;
            total--;
        }

    }


    cout<<ans<<"\n";



    return 0;
}
