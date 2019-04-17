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
    ll n,m,k;
    cin>>n>>m>>k;
    vi power(n);
    REP(i,0,n)
    {
        cin>>power[i];
    }
    vi school(n);
    map<ll,ll> strong;
    strong.clear();
    REP(i,0,n)
    {
        cin>>school[i];
        if(power[i]>=strong[school[i]])
        {
            strong[school[i]]=power[i];

        }

    }
    vi chose(k);
    REP(i,0,k)
    {
        cin>>chose[i];

    }
    ll ans=0;
    REP(i,0,k)
    {
        if(power[chose[i]-1]<strong[school[chose[i]-1]])
        {
           // cout<<i<<" "<<strong[school[chose[i]-1]]<<" ";
            ans++;

        }
        else
            ;
    }



    cout<<ans<<"\n";

    return 0;
}
