//sooolved :DD
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
    ll n;
    cin>>n;
    vi a(n-1);
    REP(i,0,n-1)
    {

        cin>>a[i];
    }

    ll x=0;
    ll maxi=0;
    ll mini=0;
    ll sum=0;
    REP(i,0,n-1)
    {
        ll current=sum+a[i];
        if(current <mini)
            mini=current;
        if(current>maxi)
            maxi=current;
        sum=sum+a[i];
    }
    x=1-mini;
    ll y=0;
    y=n-maxi;
    //cout<<y <<" "<<x<<"o";
    if(y!=x)
    {
        cout<<"-1\n";
    }
    else
    {
        //cout<<x<<" ";
        ll sum=x;
       map<ll,ll>m;
       m.clear();
       m[x]++;
       ll flag=0;
        REP(i,0,n-1)
        {
            m[sum+a[i]]++;
            if(m[sum+a[i]]>=2)
            {
                flag=1;
                break;
            }

            sum=sum+a[i];

        }
        if(flag)
            cout<<"-1\n";
        else
        {
             cout<<x<<" ";
        ll sum=x;
        REP(i,0,n-1)
        {

            cout<<sum+a[i]<<" ";
            sum=sum+a[i];

        }
        }
    }



    return 0;
}
