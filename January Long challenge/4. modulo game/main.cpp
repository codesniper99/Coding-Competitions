//sooolved :DD
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
//#include<conio.h>

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
    ll t;
    cin>>t;
    while(t--)
    {

        ll n,p;
        cin>>n>>p;
        ll answer=0;

        ll q= (p-(n%((n/2)+1)));
        answer=q*q+(p-n)*q + (p-n)*(p-n);
        if(n==1 ||n==2)
            answer=p*p*p;
        cout<<answer<<"\n";

    }



    return 0;
}
