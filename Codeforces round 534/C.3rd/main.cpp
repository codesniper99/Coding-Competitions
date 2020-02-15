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

ll board[4][4];

void check()
{

    REP(i,0,4)
    {
        if(board[i][0]==1 && board[i][1]==1&& board[i][2]==1&& board[i][3]==1)
        {
         board[i][0]=0 ; board[i][1]=0 ;board[i][2]=0; board[i][3]=0;
        }


    }

    REP(i,0,4)
    {
        if(board[0][i]==1 && board[1][i]==1&& board[2][i]==1&& board[3][i]==1)
        {
         board[0][i]=0 ; board[1][i]=0 ;board[2][i]=0; board[3][i]=0;
        }


    }

}

void place(int n)
{
    ll flag=0;
    if(n==0)
    {
        REP(i,0,4)
        {
            REP(j,0,4)
            {

                if(board[i][j]==0 && board[i+1][j]==0&& i>=0 &&i+1<=3 &&j>=0&& j<=3)
                {
                    cout<<i+1<<" "<<j+1<<'\n';
                    board[i][j]=1;
                    board[i+1][j]=1;
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;

        }
        check();

    }
     else if(n==1)
    {
        REP(i,0,4)
        {
            REP(j,0,4)
            {

                if(board[i][j]==0 && board[i][j+1]==0 && i>=0 &&i<=3 &&j>=0&& j+1<=3)
                {
                    cout<<i+1<<" "<<j+1<<'\n';
                    board[i][j]=1;
                    board[i][j+1]=1;
                    flag=1;
                    break;
                }

            }
            if(flag)
                break;

        }
        check();

    }

}

int main()
{
    ios::sync_with_stdio(0);
    string s;
    cin>>s;

        REP(i,0,4)
        {
            REP(j,0,4)
            {
                board[i][j]=0;
            }

        }
    ll len=s.size();
    REP(i,0,len)
    {
       place(s[i]-48);
    }




    return 0;
}
