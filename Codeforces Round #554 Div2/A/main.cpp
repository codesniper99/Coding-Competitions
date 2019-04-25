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
    vi c(n);
    vi k(m);
    ll ec=0,oc=0,ek=0,ok=0;
    REP(i,0,n)
    {
        cin>>c[i];
        if(c[i]%2==0)
            ec++;
        else
            oc++;
    }
    REP(i,0,m)
    {
        cin>>k[i];
        if(k[i]%2==0)
            ek++;
        else
            ok++;
    }
    ll ans=0;
    ans+=min(ek,oc);
    ans+=min(ok,ec);
    cout<<ans<<"\n";


    return 0;
}
