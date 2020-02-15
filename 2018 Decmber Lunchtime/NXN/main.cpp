//solved
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


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][n];

        ll x=1;
        ll gap=1;
        a[0][0]=1;
        REP(i,1,n)
        {


            x+=gap;
            a[0][i]=x;
            a[i][0]=x+gap;

            gap++;

        }
        x=1;gap=n-1;
        REP(i,1,n)
        {

            x+=gap;
            a[n-1][i]=n-i+a[n-1][i-1];
            a[i][n-1]=a[n-1][i]-gap+1;
            gap--;

        }
        a[n-1][n-1]=n*n;



        REP(i,1,n)
        {
            REP(j,1,i+1)
            {

                for(ll k = i-1;k>=1;k--)
                {
                    a[k][j]=a[k+1][j-1]-1;
                   }


            }



        }

        REP(i,0,n)
        {
            REP(j,0,n)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }




    }



    return 0;
}
