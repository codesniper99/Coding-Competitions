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
    ll q;
    cin>>q;
    while(q--)
    {
        ll m,n;
        cin>>n>>m;
         int boardval[n][m];
          REP(i,0,n)
        {
            REP(j,0,m)
            {
                boardval[i][j]=0;
            }

        }


        char board[n][m];
        REP(i,0,n)
        {
            ll sum=0;
            REP(j,0,m)
            {

                cin>>board[i][j];
                if (board[i][j]=='*')
                {
                    sum++;
                }
            }
            REP(j,0,m)
            {

                boardval[i][j]=sum;
            }

        }
        REP(i,0,m)
        {
            ll sum=0;
            REP(j,0,n)
            {

                if (board[j][i]=='*')
                {
                    sum++;
                }
            }
            REP(j,0,n)
            {
                boardval[j][i]+=sum;
            }

        }
        REP(i,0,n)
        {
            ll sum=0;
            REP(j,0,m)
            {

                if (board[i][j]=='*')
                {
                    boardval[i][j]--;
                }
            }


        }


        ll maxi=-1;
        REP(i,0,n)
        {

            REP(j,0,m)
            {
                if(boardval[i][j]>=maxi)
                    maxi = boardval[i][j];
            }
        }
        /* REP(i,0,n)
        {

            REP(j,0,m)
            {
                cout<<boardval[i][j]<<" ";
            }
            cout<<"\n";
        }*/
        if(maxi == n+m)
            cout<<"0\n";
        else cout<<n+m-maxi-1<<"\n";



    }



    return 0;
}
