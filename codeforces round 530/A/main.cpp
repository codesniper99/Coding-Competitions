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
    ll w,h ;
    ll u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    ll ww=h;

    for(ll i=h;i>=0;i--)
    {
      if(i==d1)
      {w+=i;
          w-=u1;
          if(w<0)
            w=0;

      }
      else if(i==d2)
      {w+=i;
          w-=u2;
          if(w<0)
            w=0;
      }
      else
        w+=i;

       // cout<<w<< " ";

    }

    cout<<w<<'\n';



    return 0;
}
