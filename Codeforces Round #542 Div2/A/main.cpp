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


int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    vector<double> a(n);
    ll pos=0;
    ll neg=0;
    REP(i,0,n)
    {

        cin>>a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
    }

    if(neg>=ceil((double)n/2))
        cout<<"-1\n";
    else if(pos>=ceil((double)n/2))
        cout<<"1\n";
    else
    cout<<"0\n";


    return 0;
}