#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


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

#define mod 998244353

bool isValid(ll row, ll col, ll board[50][50],ll rowmax,ll colmax)
{
    return ((row >= 0) && (row < rowmax) &&
           (col >= 0) && (col < colmax) && (board[row][col]==0) );
}

ll fun(ll a)
{
    ll num=0;ll x=a;

    ll m=1;
    while(x)
    {

        ll digit = x%10;

        num = ( num + ( digit* m) %mod ) %mod;
        m   = ( m*10 ) % mod;

        num = ( num + ( digit* m) %mod ) %mod;
        m   = ( m*10 )% mod;

        x=x/10;

    }

    return num;
}

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    vi a(n);

    REP(i,0,n)
    {
        cin>>a[i];
    }


    ll ans=0;
    REP(i,0,n)
    {
        ans+= (fun(a[i]))%mod;
    }
    cout<< (n*ans)%mod;

    return 0;
}
