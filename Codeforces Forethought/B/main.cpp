
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
    ll len=s.size();
    string with_out;
    with_out.clear();
    REP(i,0,len)
    {
        if(s[i]=='a')
            ;
        else
            with_out+=s[i];

    }
    ll len2=with_out.size();
    if(len2%2==1)
    {
        cout<<":(\n";
        return 0;
    }

    ll i=0;
    while(with_out[i]==with_out[len2/2 +i] && i<=(len2/2)-1)
    {
        i++;
    }
    if(i==(len2/2))
    {
        string ans;
        ans.clear();
        REP(j,0,len-i)
        {
            ans+=s[j];
        }
        ll flag=0;
        REP(j,len-i,len)
        {
            if(s[j]=='a')
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<":(\n";
        else
            cout<<ans<<"\n";
    }
    else
        {
            cout<<":(\n";
        }

    return 0;
}
