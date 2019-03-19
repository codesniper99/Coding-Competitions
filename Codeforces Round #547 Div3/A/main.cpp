//soolvedd :DD

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

ll multwo(ll n,ll m)
{


}
int main()
{
    ios::sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;
    if(m<n)
        cout<<"-1\n";
    else if(m==n)
        cout<<"0\n";
    else
    {
        if(m%n!=0)
            cout<<"-1\n";
        else
        {

            ll div=m/n;
            ll twos=0;
            ll threes=0;
            ll x=div;
            while(x)
            {
                twos++;
                if(x%2==0)
                x=x/2;
                else
                    break;
            }
            ll y=div;
             while(y)
            {
                threes++;
                if(y%3==0)
                y=y/3;
                else
                    break;
            }
            ll twoss=pow(2,twos-1);
            ll thre=pow(3,threes-1);
           // cout<<twoss<<" "<<thre;
            if(twoss*thre != div)
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<twos+threes-2<<"\n";
            }

        }

    }




    return 0;
}
