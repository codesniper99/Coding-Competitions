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
    ll n,b,a;
    ll cur_b,cur_a;
    cin>>n>>b>>a;
    cur_b=b;
    cur_a=a;
    vi x(n);
    REP(i,0,n)
    {
        cin>>x[i];
    }
    ll ans=0;
    REP(i,0,n)
    {
        if(!x[i])
        {
            if(cur_a>0)
            {
                cur_a--;
                ans++;
            }
            else
            {
                if(cur_b>0){
                cur_b--;
                ans++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
             if(cur_b>0){
                if(cur_a==a)
                {
                    cur_a--;
                    ans++;
                }
                else{
                    cur_b--;
                    cur_a++;
                    if(cur_a>=a)
                        cur_a=a;
                    ans++;
                    }
                }
            else
            {
                 if(cur_a>0)
                 {
                   cur_a--;
                   ans++;
                 }
                 else
                 {
                     break;
                 }
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}
