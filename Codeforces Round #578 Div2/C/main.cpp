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
    ll n,m,q;
    cin>>n>>m>>q;
    while(q--)
    {
        ll sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;

        ll gcdd = __gcd(n,m);



        ll multis,multie;
        ll realsec = n/gcdd;
        ll realsec2 =m/gcdd;

        if(sx==1)
        {
            double rallx = (double)sy/(double)realsec;
            ll reallx =ceil(rallx);
            //cout<<reallx;

            if(ex==1)
            {
                double rally = (double)ey/(double)realsec;
                ll really = ceil(rally);
                if(reallx==really)
                {
                    cout<<"YES\n";
                    continue;
                }
                else
                {
                    cout<<"NO\n";
                    continue;
                }

            }
            else
            {
                double rally = (double)ey/(double)realsec2;
                ll really = ceil(rally);

                if(reallx==really)
                {
                    cout<<"YES\n";
                    continue;
                }
                else
                {
                    cout<<"NO\n";
                    continue;
                }

            }

        }
        else
        {
            double rallx = (double)sy/(double)realsec2;
            ll reallx =ceil(rallx);
            if(ex==1)
            {
                double rally = (double)ey/(double)realsec;
                ll really = ceil(rally);

                if(reallx==really)
                {
                    cout<<"YES\n";
                    continue;
                }
                else
                {
                    cout<<"NO\n";
                    continue;
                }

            }
            else
            {
                double rally = (double)ey/(double)realsec2;
                ll really = ceil(rally);
                if(reallx==really)
                {
                    cout<<"YES\n";
                    continue;
                }
                else
                {
                    cout<<"NO\n";
                    continue;
                }

            }
        }
    }






    return 0;
}
