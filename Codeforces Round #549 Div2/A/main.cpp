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
    ll left=0,right=0,countl=0,countr=0;
    ll flagl=0,flagr=0,ans=0;
    REP(i,0,n)
    {
        cin>>a[i];
        if(a[i]==0)
            left++;
        else
            right++;

    }
    REP(i,0,n)
    {
        if(a[i]==0)
            {
                countl++;
                if(countl==left)
                    flagl=1;

            }
        else
            {
                countr++;
                if(countr==right)
                    flagr=1;

            }
            if(flagl==1||flagr==1)
            {
                ans=i+1;
                break;
            }

    }

    cout<<ans<<"\n";


    return 0;
}
