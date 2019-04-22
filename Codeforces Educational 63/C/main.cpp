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
    ll n,m;
    cin>>n>>m;
    vi x(n);
    REP(i,0,n)
    {
        cin>>x[i];
    }
    vi p(m);
    REP(i,0,m)
    {
        cin>>p[i];
    }
    ll gcdd=x[1]-x[0];
    REP(i,0,n-1)
    {
       ll gap=x[i+1]-x[i];
       gcdd=__gcd(gap,gcdd);
    }
    ll flag=0;ll ans=0;
   // cout<<x[0]<<" ";
    REP(i,0,m)
    {
        if(gcdd%p[i]==0)
        {
            ans=i;
            flag=1;
            break;
        }

    }
    if(flag)
    {
        cout<<"YES\n";
        cout<<x[0]<<" "<<ans+1<<"\n";
    }
    else
    {
        cout<<"NO\n";
    }




    return 0;
}
