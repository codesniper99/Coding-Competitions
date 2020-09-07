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
    string s;
    cin>>s;
    ll len=s.size();
    ll l=1,r=1;
    REP(i,0,len)
    {
        if(s[i]-'0')
        {
            cout<<r<<" 3\n";
            r++;
            if(r==5)
                r=1;

        }
        else

        {

            cout<<l<<" 1\n";
            l+=2;
            if(l==5)
                l=1;
        }

    }




    return 0;
}
