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
    ll board[50][50];

bool safe(ll origr,ll origc, ll r,ll c)
{
    if( origr==r || origc==c )
    {
        return false;

    }
    else
    {
        if(board[r][c]!=1)
        {
            board[r][c]=1;
            return true;
        }
        else
            return false;
    }

}

bool solvepos(ll origr,ll origc,ll r,ll c,ll counter)
{
    if(counter>=r*c)
    {
        return true;
    }
    else
    {
        REP(i,0,r)
        {
            REP(j,0,c)
            {
                if(safe(origr,origc,i,j)==true)
                {
                            cout<<i<<" "<<j<<"\n";
                    if(solvepos(i,j,r,c,counter+1))
                        {
                            return true;
                            }

                }
                else
                    ;
            }
        }
        return false;
    }
}
bool solve(ll r,ll c)
{
        board[1][2]=1;

    if(solvepos(1,2,r,c,0)==false)
    {
        cout<<"IMPOSSIBLE\n";
    }
    else
        return true;


}
// driver program to test above function
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll r,c;
        cin>>r>>c;




REP(i,0,r)
    {
        REP(j,0,c)
        {
            board[i][j]=0;
        }
    }

    solve(r,c);

    }



    return 0;
}
