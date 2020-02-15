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
#define REP(i, x, y) for(long long int i=x ; i<=y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 100'0000007

ll solve(ll start,ll n,ll k,ll till_now_sum)
{


    if((n-start+1)%k==0)
  {
      ll terms= (n-start+1)/k;
      return ((terms*(2*start+(terms-1)*k))/2)+till_now_sum;
  }
  else
  {
    ll t=(n-start+1)/k;

      ll next_start=((t+1)*k)%n+1;
      ll sum=0;
      ll terms=(n-start+1/k)+1;
     sum=((terms*(2*start+(terms-1)*k))/2);
      sum+=till_now_sum;
      cout<<solve(next_start,n,k,sum)<<" ";
  }

}

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    map<ll,ll> m;
    m.clear();
    cout<<'1'<<" ";
    REP(k,1,sqrt(n)-1)
    {

        if(n%k==0)
            {
                ll term = n/k;
                cout<<((term*(2+term*k-k))/2)<<" ";
                ll term2=k;
                cout<<((term2*(2+term2*k-k))/2)<<" ";
            }


    }
   /* ll x=sqrt(n);
    double y=sqrt(n);
    if(y-x==0.0)
    {

         ll term=n/x;
         cout<<((term*(2+term*x-x))/2)<<" ";

    }

*/


    return 0;
}
