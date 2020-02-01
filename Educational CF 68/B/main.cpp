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

bool fun( vector<ll> &a,ll len)
{
        ll maxi=-1;
        ll pos=0;
        REP(i,0,len)
        {
            if(a[i]>=maxi)
            {
                maxi=a[i];
                pos=i;
            }

        }

        while(len>=1)
        {
        if(len==1)
            return true;
//REP(i,0,len)
   // {
  //      cout<<a[i]<<" ";
  //  }
   // cout<<" k ";
     //   cout<<pos<<" \n";
        if(pos-1>=0)
            if(abs(a[pos-1]-a[pos])==1)
            {

               a[pos]=a[pos-1];
               a[pos-1]=0;
               pos = pos-1;
               len--;
               continue;
            }
         if(pos+1<=len-1)
            if(abs(a[pos+1]-a[pos])==1)
            {
                a[pos]=a[pos+1];
                a[pos+1]=0;
                len--;
                continue;
            }
            return false;

   }
   return true;


}



int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    vi a(n);
    REP(i,0,n)
    {
        cin>>a[i];
    }

    bool res =fun(a,n);
    if(res)
        cout<<"YES\n";
    else
        cout<<"NO\n";





    return 0;
}
