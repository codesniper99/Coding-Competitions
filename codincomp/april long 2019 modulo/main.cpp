#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

 #include<tgmath.h>
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


int main()
{
    ll n;
    cin>>n;
    vi a(n);
    ll maxi=-1;
    REP(i,0,n)
    {
        cin>>a[i];
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    sort(a.begin(),a.end());
    ll smaxi=-1;
    REP(i,0,n)
    {
        if(a[i]>smaxi && a[i]<maxi)
        {
            smaxi=a[i];
        }
    }
    cout<<smaxi<<"\n";

    return 0;
}
