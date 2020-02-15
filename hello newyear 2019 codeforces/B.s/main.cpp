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
 vi a(20);
 ll flag=0;ll n=0;
 ll dont=0;
void solve(ll star,ll choi,ll sum)
{
    //cout<<n<<" "<<star<<" "<<choi<<" "<<sum<<'\n';
    if(star==n && (sum==0 ||sum%360==0))
    {

        flag=1;
        if(flag==1)
        {
            dont=1;
        }
        return;

    }
    else if(star==n && sum!=0)
    {
        flag=-1;
        return;
    }
    else
    {

        solve(star+1,0,sum+a[star]);
        solve(star+1,1,sum-a[star]);
    }


}

int main()
{
    ios::sync_with_stdio(0);

    cin>>n;
    ll sum2=0;
   a.clear();
    REP(i,0,n)
    {

        cin>>a[i];
        sum2+=a[i];
    }

  /*  sort(a.begin(),a.end());
    ll flag=0;
    ll sum=0;

    REP(i,0,n)
    {
        if(sum<a[n-1])
        {
            sum+=a[i];
        }
        else
            sum-=a[i];


    }
    if(sum==0)
    {
        cout<<"YES\n";
    }

    else
    {

        if(sum2%360==0)
        {

            cout<<"YES\n";
        }

    else
        cout<<"NO\n";
    }
*/
solve(0,0,0);
solve(0,1,0);
if(dont==1)
    cout<<"YES\n";
else
    cout<<"NO\n";
    return 0;
}
