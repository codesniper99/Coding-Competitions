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
    ll t;
    cin>>t;
    while(t--)
    {

    ll n;
    cin>>n;
    vi a(n);
    REP(i,0,n)
        cin>>a[i];

    map<ll,ll>m;
    m.clear();
    REP(i,0,n)
        {
            m[a[i]]++;
        }
        vi ans(n);
        ans.clear();
    ll maxi=-1;
    ll sum=0;
    for(auto y:m)
    {
        sum+=y.second;
        if(y.second>maxi)
        {
            maxi=y.second;
        }

    }
    if(maxi>sum-maxi)
    {
        cout<<"No\n";
        continue;
    }
    else{

    REP(i,0,n)
    {
        for(auto x:m)
        {
            if(x.first!=a[i] && x.second>0)
            {
                ans.push_back(x.first);
                cout<<x.first<<" "<<x.second<<"\n";
                m[x.first]--;

                break;
            }

        }

    }

    ll len=ans.size();
    REP(i,0,len)
    {
        cout<<ans[i]<<" ";
    }
    }
    }
    return 0;
}
