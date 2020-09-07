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
        ll ones[33];
        ll zeros[33];

        REP(i,0,32)
        {
            ones[i]=0;
            zeros[i]=0;
        }
        REP(i,0,n)
        {
            cin>>a[i];

        }
        REP(i,0,n)
        {
            ll num = a[i];
            ll pos=0;
            while(num)
            {
                ll x = num%2;
                if(x==1)
                {
                    ones[pos]++;
                }
                else
                    zeros[pos]++;

                num=num/2;
                pos++;
            }
            REP(j,pos,32)
            {
                zeros[j]++;
            }

        }

        ll ans[34];
        REP(i,0,32)
        {
            if(ones[i]>zeros[i])
            {
                ans[i]=1;
               // cout<<i<<"\n";
            }
            else
            {
                ans[i]=0;
              //  cout<<i<<"\n";

            }
        }

        REP(i,0,32)
        {
            //cout<<zeros[i]<<" ";
        }
        ll maxi=0;
        REP(i,0,32)
        {
            maxi+=pow(2,i)*ans[i];

        }

        ll sum=0;
        REP(i,0,n)
        {
            sum+=a[i]^maxi;
        }
        cout<<sum<<"\n";





    }



    return 0;
}
