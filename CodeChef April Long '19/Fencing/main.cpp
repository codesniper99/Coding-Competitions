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
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll k;
        cin>>k;
        ll x,y;
        map< pair<ll,ll> , ll> mapper;
        mapper.clear();
        REP(i,0,k)
        {
            cin>>x>>y;
            mapper[make_pair(x, y)]=1;
        }

        ll ans=0;
        for(std::map< pair<ll,ll> , ll>::iterator x=mapper.begin();x!=mapper.end();++x)
        {
            ll counter=0;

            ll row=(x->first).first;
            ll col= (x->first).second;
            //cout<<row<< " "<<col<<"\n";
            std::map< pair<ll,ll> , ll>::iterator rr;

            rr= mapper.find(make_pair(row-1,col));
            if(rr!=mapper.end())
            {
                counter++;
            }
             rr= mapper.find(make_pair(row,col-1));
            if(rr!=mapper.end())
            {
                counter++;
            }
             rr= mapper.find(make_pair(row,col+1));
            if(rr!=mapper.end())
            {
                counter++;
            }
             rr= mapper.find(make_pair(row+1,col));
            if(rr!=mapper.end())
            {
                counter++;
            }
            ans+=4-counter;
            //cout<<"yo\n";
        }
        cout<<ans<<"\n";

    }
    return 0;
}
