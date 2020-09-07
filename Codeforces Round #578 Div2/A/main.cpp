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
    vi a(10,0);
    ll left=0,right=9;
    string s;
    cin>>s;
    REP(i,0,n)
    {
        char c=s[i];

        if(c=='L')
        {
            for( ll i=0;i<10;i++)
            {
                if(a[i]==0)
                {
                    a[i]=1;
                    break;
                }
            }

        }
        else if(c=='R')
        {
            for( ll i=9;i>=0;i--)
            {
                if(a[i]==0)
                {
                    a[i]=1;
                    break;
                }
            }
        }
        else
        {
            ll num=c-'0';
            a[num]=0;

        }

    }

    REP(i,0,10)
    {
        cout<<a[i];

    }
    cout<<"\n";



    return 0;
}
