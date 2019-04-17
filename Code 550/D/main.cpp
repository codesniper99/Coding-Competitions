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
    vi a(n);
    map<ll,ll>m;
    m.clear();
    REP(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    ll middle=0;
    ll maxi=0;
    for(auto y:m)
    {
        if(y.second>maxi)
        {
            middle=y.first;
            maxi=y.second;
        }
    }
    ll pos=-1;
    ll counter=0;
    REP(i,0,n)
    {
        if(a[i]==middle)
        {
            pos=i;

        }
        else
        {
            counter++;
        }
    }
    cout<<counter<<"\n";
    REP(i,pos,n)
    {
        if(a[i]>middle)
        {
            cout<<"2 "<< i+1<<" "<<i<<"\n";
        }
        else if(a[i]<middle)
        {
            cout<<"1 "<<i+1<<" "<<i<<"\n";
        }

        else
            ;
    }
    for(ll i=pos-1;i>=0;i--)
    {
        if(a[i]>middle)
        {
            cout<<"2 "<< i+1<<" "<<i+2<<"\n";
        }
        else if(a[i]<middle)
        {
            cout<<"1 "<<i+1<<" "<<i+2<<"\n";
        }

        else
            ;
    }



    return 0;
}
