#include<bits/stdc++.h>

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;

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
    ll x=t;
    while(t--)
    {
        ll n;
        cin>>n;
        string p;
        cin>>p;
        cout<<"Case #"<<x-t<<": ";
        REP(i,0,2*n-2)
        {
            if(p[i]=='E')
            {
                cout<<"S";
            }
            else
                cout<<"E";

        }
        cout<<"\n";



    }


    return 0;
}
