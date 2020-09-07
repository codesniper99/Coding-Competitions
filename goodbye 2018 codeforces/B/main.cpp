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
    ll n;
    cin>>n;
    ll sumx=0,sumy=0;
    vector<pair<ll,ll> >coord(n);
    REP(i,0,n)
    {
        cin>>coord[i].F>>coord[i].S;
        sumx+=coord[i].F;
        sumy+=coord[i].S;
    }
    vector<pair<ll,ll> >clues(n);
    REP(i,0,n)
    {
        cin>>clues[i].F>>clues[i].S;
        sumx+=clues[i].F;
        sumy+=clues[i].S;

    }

    cout<<sumx/n<<" "<<sumy/n<<" ";



    return 0;
}
