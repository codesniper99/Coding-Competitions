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
    ll y,b,r;
    cin>>y>>b>>r;
    ll ans=y+y+1+y+1+1;
    ll x=0;
    ll maxb=0,maxr=0;
ll maxi=-1;
    for(ll i=1;i<=y;i++)
    {
        REP(j,i+1,i+2)
        {

            REP(k,j+1,j+2)
            {
                if(k<=r && j<=b && i<=y)
                {

                    ll t=k+j+i;
                    if(t>=maxi)
                    {maxi=t;
                   // cout<<i<<" "<<j<<" "<<k;
                    }
                }
            }
        }


    }

    cout<<maxi<<"\n";

    return 0;
}
