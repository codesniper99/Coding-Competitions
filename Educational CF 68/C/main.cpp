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

ll fun(ll start,ll end,vector<ll> a)
{
    //cout<<start<<" "<<end<<"\n";
    ll maxi=-1;
    ll mini =INF;
    REP(i,start,end)
    {
        if(a[i] >=maxi)
        {
            maxi=a[i];
        }
        if(a[i]<=mini)
        {
            mini=a[i];
        }

    }
    return maxi-mini;

}


int main()
{
    ll n,k;


    ios::sync_with_stdio(0);
    cin>>n>>k;
     vi a(n);

    REP(i,0,n){
    cin>>a[i];
    }
    vi dif;
    dif.clear();
    REP(i,1,n)
    {
        dif.PB(a[i]-a[i-1]);
    }

    ll len = dif.size();
    sort(dif.begin(),dif.end(),greater<int>());
    ll answer=a[n-1]-a[0];

    REP(i,0,k-1)
    {
        answer-= dif[i];
    }
    cout<<answer<<"\n";

    return 0;
}
