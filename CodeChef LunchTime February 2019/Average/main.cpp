//solvedd
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

        ll n,k,v;
        cin>>n>>k>>v;
        vi a(n);
        ll sum=0;
        REP(i,0,n)
        {
            cin>>a[i];
            sum+=a[i];
        }

        ll ans= (v*(n+k)-sum)/k;
        double ans2=(double)((double)v*((double)n+(double)k)-(double)sum)/(double)k;
        if((ans-ans2)!=0)
            cout<<"-1\n";

        else
            {
                if(ans>0)
                cout<<ans<<"\n";
                else
                    cout<<"-1\n";
            }
    }


    return 0;
}
