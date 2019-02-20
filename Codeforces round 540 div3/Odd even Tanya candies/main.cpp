//solvedd
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
    vi a(n);

    REP(i,0,n)
        cin>>a[i];

    vi odd(n);
    vi even(n);

    ll oddsum=0;
    ll evensum=0;

    REP(i,0,n)
    {
        if(i%2==0)
        {
            evensum+=a[i];
            even[i]=evensum;
            odd[i]=oddsum;
        }
        else
        {

            oddsum+=a[i];
            even[i]=evensum;
            odd[i]=oddsum;
        }
    }
    ll counte=0;
    REP(i,0,n)
    {
        if(i%2==0)
        {
            ll osum=odd[i]+even[n-1]-even[i];
            ll esum=even[i]+odd[n-1]-a[i]-odd[i];
            if(osum==esum)
                {
                    counte++;
                    //cout<<i<<"\n";
                }
        }
        else
        {
            ll osum=odd[i]+even[n-1]-even[i]-a[i];
            ll esum=even[i]+odd[n-1]-odd[i];
            if(osum==esum)
                {
                    counte++;
                   // cout<<i<<"\n";
                }


        }

    }

    cout<<counte<<'\n';




    return 0;
}
