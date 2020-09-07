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
        ll n;
        cin>>n;
        vi a(n);
        vi b(n);
        ll maxi1=0;
        REP(i,0,n)
        {
            cin>>a[i];
            maxi1+=a[i];
        }
        ll maxi=0;
        REP(i,0,n)
        {
            cin>>b[i];
            maxi+=b[i];
        }
        ll sum=0;
        vi sum_a(n);
        vi sum_b(n);
        sum_a[0]=0;
        sum_b[0]=maxi;

        ll last=0;
        ll tot =maxi;
        REP(i,0,n)
        {
            sum_a[i]=last+a[i];
            last+=a[i];
            sum_b[i]=tot-b[i];
            tot-=b[i];
        }

         ll maxi2=-1;
         REP(i,0,n)
         {
           //  cout<<sum_a[i]<<" ";
         }
        // cout<<"\n";
         REP(i,0,n)
         {
            // cout<<sum_b[i]<<" ";
         }
        // cout<<"\n";

         REP(i,0,n)
         {

             ll max_after_day = sum_a[i]+sum_b[i];
             ll max_before_day =sum_a[i]+sum_b[i]-a[i]+b[i];
            // cout<<max_after_day<<" "<<max_before_day<<"\n";
             ll maxer =max(max_after_day,max_before_day);
             if(maxer>maxi2)
             {
                 maxi2 = maxer;
             }
         }

        cout<<max(maxi2,max(maxi,maxi1))<<"\n";




    }



    return 0;
}
