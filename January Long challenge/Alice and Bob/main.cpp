//soooolved :DDD
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
        ll n,a,b;
        cin>>n>>a>>b;
        vi x(n);
        ll both=0,alice=0,bob=0;
        REP(i,0,n){cin>>x[i];
        if(x[i]%a==0&&x[i]%b==0)both++;
        else if(x[i]%b==0)alice++;
        else if(x[i]%a==0)bob++;
        else;
        }
        ll ans=0;
        if(both>0)
        {
            if((alice-bob)>=1)
                ans=1;
            else
                ans=0;
                if(ans==1)
            cout<<"ALICE\n";
        else
            cout<<"BOB\n";
        }
        else
        {
        if((bob-alice)>=1)
                ans=0;
            else
                ans=1; if(ans==1)
            cout<<"ALICE\n";
        else
            cout<<"BOB\n";

        }

    }
    return 0;
}
