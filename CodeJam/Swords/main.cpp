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

    ll t;
    cin>>t;
    ll q=t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vi c(n);
        vi d(n);
        REP(i,0,n)
        {
            cin>>c[i];
        }
        REP(i,0,n)
        {
            cin>>d[i];

        }

        ll left=0,right=0;
        ll ans=0;
        for(left=0;left<=n-1;left++)
        {

            for(right=left;right<=n-1;right++)
            {
                ll max_c=-1;
                ll max_d=-1;
                REP(i,left,right+1)
                {
                    if(c[i]>max_c)
                    {
                        max_c=c[i];
                    }
                    if(d[i]>max_d)
                    {
                        max_d=d[i];
                    }




                }
                if(abs(max_c-max_d) >k)
                    continue;

                ll count_c=0,count_d=0;
                REP(i,left,right+1)
                {
                    if(c[i]==max_c)
                    {
                        count_c++;
                    }

                    if(d[i]==max_d)
                    {
                        count_d++;
                    }

                }
                ans++;

            }

        }


         cout<<"Case #"<<q-t<<": "<<ans<<"\n";

    }



    return 0;
}
