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

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vi a(n);
    REP(i,0,n)
        cin>>a[i];

    REP(i,0,n-1)
    {
        ll h2 = a[i+1];
        ll h1 = a[i];
        if(m<0)
        {
            cout<<"NO\n";
           return;
        }
        if(h2>h1)
        {
            if( abs(h2-h1)>k)
            {
                if(abs(h2-h1)-k > m)
                {
                    cout<<"NO\n";
                    return;
                }
                else
                {
                    m-=abs(h2-h1)-k;
                }
            }

            else
            {
                m+= min(k-abs(h2-h1),h1);
            }

        }
        else if(h2==h1)
        {
            if(h1>=k)
                m+=k;
            else
                m+=h1;
        }
        else
        {
                m+=  abs(h2-h1);
                h1-= abs(h2-h1);

                if(h1>=k)
                    m+=k;
                else
                    m+=h1;

        }

    }
    cout<<"YES\n";
    return;


}


int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }



    return 0;
}
