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
    ll n,x;
    cin>>n>>x;
    vi a(n);
    REP(i,0,n)
    {
        cin>>a[i];
    }

    if(x<=0)
    {
        ll curr=0;
        ll maxi=0;
        ll start_n=0;
        ll end_n=0;
        ll s=0;
        ll maxi_n=0;

        REP(i,0,n)
        {
            curr+=a[i];
            if(maxi_n>curr)
            {
                    maxi_n=curr;
                    start_n=s;
                    end_n=i;

            }
            if(curr>0)
            {
                curr=0;
                s=i+1;
            }
        }

       // cout<<start_n<<" "<<end_n<<" \n";
        if(end_n==0)
            end_n--;
        for(ll i=start_n;i<=end_n;i++)
        {
            a[i]*=x;
        }
        if(a[0]<0&& end_n==0)
            a[0]*=x;


         REP(i,0,n)
        {
        cout<<a[i]<<" ";
        }
        curr=0;
        maxi=0;
        REP(i,0,n)
        {
            curr+=a[i];
            if(curr>0)
            {
                if(curr>=maxi)
                {
                    maxi=curr;
                }
            }
            if(curr<0)
            {
                curr=0;
            }

        }
        cout<<maxi<<"\n";
    }

    else
    {

        ll curr=0;
        ll maxi=0;
        ll start_p=0;
        ll end_p=0;

        ll start_n=0;
        ll end_n=0;
        ll s=0;
        REP(i,0,n)
        {
            curr+=a[i];
            if(maxi<curr)
            {
                    maxi=curr;
                    start_p=s;
                    end_p=i;

            }
            if(curr<0)
            {
                curr=0;
                s=i+1;
            }
        }

        curr=0;
        if(end_p==0)
            end_p--;
        for(ll i=start_p;i<=end_p;i++)
        {
            //cout<<i<<" ";
            a[i]*=x;
        }

        if(a[0]>0 && end_p==0)
            a[0]*=x;


        curr=0;
        maxi=0;
        REP(i,0,n)
        {
            curr+=a[i];
            if(curr>0)
            {
                if(curr>=maxi)
                {
                    maxi=curr;
                //    end_p=i;
                }
            }
            if(curr<0)
            {

                curr=0;
                //start_p=i+1;
            }

        }
        cout<<maxi<<"\n";

    }

    return 0;
}
