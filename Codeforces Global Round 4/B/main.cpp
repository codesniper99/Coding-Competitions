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

    string s;
    cin>>s;

    ll no_of_w=0;
    ll no_of_wo=0;
    ll no_of_wow=0;


    REP(i,1,s.size())
    {
        //cout<<no_of_w<<" "<<no_of_wo<<" "<<no_of_wow<<"\n";
        if(s[i]=='v' && s[i-1]=='v')
        {

          no_of_wow+= no_of_wo;
          no_of_w++;
        }
        else if(s[i]=='o')
        {
            no_of_wo+=no_of_w;
         }
    }
    cout<<no_of_wow<<"\n";
    return 0;
}
// vvvoooovvovvv
