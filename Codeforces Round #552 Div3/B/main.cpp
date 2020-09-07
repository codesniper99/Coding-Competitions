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
    map <ll,ll>m;
    m.clear();
    REP(i,0,n)
    {
        cin>>a[i];
        if(m[a[i]]==0)
            m[a[i]]++;
    }
    ll mini=1000,mid=-1,maxi=-1;
    ll count=0;
    vi b;
    for(auto x:m)
    {
        if(x.first>maxi)
        {
            maxi=x.first;
        }
        if(x.first<mini)
        {
            mini=x.first;
        }
    count++;
b.PB(x.first);
    }
    if(count==1)
        cout<<"0\n";
    else if(count==2)
    {
        if((maxi-mini)%2==0)
            cout<<(maxi-mini)/2<<"\n";
        else
             cout<<(maxi-mini)/1
             <<"\n";
    }
    else if(count==3){
            sort(b.begin(),b.end());
            if(b[1]-b[0]!=b[2]-b[1])
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<(b[1]-b[0]);
            }

    }
    else
    {
        cout<<"-1\n";
    }

    return 0;
}
