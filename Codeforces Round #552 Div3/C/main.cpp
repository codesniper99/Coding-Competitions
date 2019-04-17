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
    ll a,b,c;
    cin>>a>>b>>c;
    vi z;

    z.PB(a/3);
    z.PB(b/2);
    z.PB(c/2);

    sort(z.begin(),z.end());

    if(z[2]==0)
    {
        cout<<a+b+c<<"\n";
    }
    else
    {

        if(z[0]==z[1] && z[1]==z[2])
             cout<<7*z[0]<<"\n";
        else if(c<a && c<b)
        {
            if(a-z[0]*3 >=2)
                cout<<7*z[0]+4<<"\n";
            else
                cout<<7*z[0]+3<<"\n";
        }
        else if(b<c&&b<a)
        {
                if(c-z[0]*2 >=2)
                    cout<<7*z[0]+3<<"\n";
            else
                cout<<7*z[0]+2<<"\n";

        }
        else if(a<c&&a<b)
        {
                cout<<7*z[0]+3<<"\n";
        }
        else
        {
            cout<<7*z[0]<<"\n";
        }

    }





    return 0;
}
