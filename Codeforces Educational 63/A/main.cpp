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
    string s;
    cin>>s;
    char last=s[0];
    ll pos=0;
    ll flag=0;
    REP(i,1,n)
    {
        if(s[i]<last)
        {
            flag=1;
            cout<<"YES\n";
            cout<<pos+1<<" "<<i+1;
            break;
        }
        else
        {
            last=s[i];
            pos=i;

        }

    }
    if(!flag)
    {
        cout<<"NO\n";

    }



    return 0;
}
