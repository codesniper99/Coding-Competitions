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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        ll tot=0;
        vi a(n);
        REP(i,0,n)
        {
            cin>>a[i];
            tot+=a[i];
        }
        if(k%2==0)
        {
            if(tot%2==1)
            {
                cout<<"NO\n";
                continue;
            }
        }
        else
        {

            if(tot%2==0)
            {
                cout<<"NO\n";
                continue;
            }
        }

        if(k==1)
        {
            cout<<"YES\n";
            cout<<n<<"\n";
            continue;
        }

        vi ans;
        ans.clear();

        ll pos=0;
        ll sum=0;
        ll x=k-1;

        while(x>0 && pos<=n-1)
        {
            sum+=a[pos];
            if(sum%2==1)
            {
                ans.PB(pos);
                sum=0;
                pos++;
                x--;
            }
            else
            {
                pos++;
                continue;
            }


        }
        ll len=ans.size();
        ll total=0;
        if(len>=1){
        REP(i,ans[len-1]+1,n)
        {
            total+=a[i];
        }}
        else
            total=tot;

        //cout<<total<<" ";
        if(total%2==1)
        {
            cout<<"YES\n";
            REP(i,0,len)
            {
                cout<<ans[i]+1<<" ";
            }
            cout<<n<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }



    return 0;
}
