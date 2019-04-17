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

    ll num_o=0,num_e=0;
    vi e;
    vi o;
    REP(i,0,n)
    {
        cin>>a[i];
            if(a[i]%2==0)
            {
                num_e++;
                e.PB(a[i]);
            }
            else
                {
                    num_o++;
                    o.PB(a[i]);
                }
    }


    if(num_e==num_o || abs(num_e-num_o)==1)
    {
        cout<<"0\n";
    }
    else
    {
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        ll last_o=o.size();
        ll last_e=e.size();
        while(last_o>0 && last_e>0)
        {
            last_o--;
            last_e--;
        }
        if(last_e>0)
        {
            last_e--;

        ll ans=0;
        REP(i,0,last_e)
        {
            ans+=e[i];
        }
        cout<<ans<<"\n";
        }
        else
        {
            last_o--;

        ll ans=0;
        REP(i,0,last_o)
        {
            ans+=o[i];
        }
        cout<<ans<<"\n";

        }


    }



    return 0;
}
