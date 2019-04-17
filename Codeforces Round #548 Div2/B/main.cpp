//SOLVEDD

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
    REP(i,0,n)
    {
        cin>>a[i];
    }
    ll ans=a[n-1];
    ll maxi=a[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        if(a[i]<maxi )
        {
            ans+=a[i];
            maxi=a[i];
            cout<<ans<<" ";
        }
        else
        {

            maxi=maxi-1;
            if(maxi<0)
                maxi=0;
            ans+=maxi;
            //cout<<ans<<" ";
        }

    }
    cout<<ans<<"\n";

    return 0;
}
