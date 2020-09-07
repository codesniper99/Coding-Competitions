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
#define MOD 998244353
ll power(ll x, unsigned ll y, ll p)
{
    ll res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    char c1=s[0];
    char x=c1;
    ll j=0;

    while(x==c1&& j<=n-1)
    {
        j++;
        x=s[j];
    }

        ll t=n-1;

        char c2=s[n-1];

        char y=c2;
        while(y==c2 && t>=0)
        {
            t--;
            y=s[t];

        }
        t++;
        ll right=n-t;
        ll left=j;
        //cout<<right<<" "<<left<<" "<<t<<" "<<j<<" ";


    if(c2==c1)
    {
      ans+=(left%MOD*right%MOD+left%MOD+right%MOD+1)%MOD;
    }
    else
        ans=(left+right+1)%MOD;

    cout<<ans<<'\n';

    return 0;
}
