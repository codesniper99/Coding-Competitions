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

    ll x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    ll a,b,c;
    ll sum= max(max(max(x1,x2),x3),x4);
    ll z1=sum-x1;
    ll z2= sum-x2;
    ll z3 =sum-x3;
    ll z4= sum-x4;

    if(z1==0)
    {

    a=-z2;
    b=-z3;
    c=-z4;
    }
    else if(z2==0)
    {

    a=-z1;
    b=-z3;
    c=-z4;

    }
    else if(z3==0)
    {
          a=-z1;
    b=-z2;
    c=-z4;


    }
    else
    {
          a=-z1;
    b=-z3;
    c=-z2;

    }

cout<<-a <<" "<<-b<<" "<<-c<<" "<<"\n";


    return 0;
}
