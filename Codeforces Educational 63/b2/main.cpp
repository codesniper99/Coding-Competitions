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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll first_e=-1;
    ll num=0;

    vector<ll>pos;
    queue<ll>wow;
    REP(i,0,n)
    {

        if(s[i]=='8')
            pos.PB(i);
        wow.push(s[i]-'0');
    }

    sort(pos.begin(),pos.end());
    bool turn=1;
    REP(i,0,n-11)
    {
        turn^=1;
        if(turn==1)
        {
            if(wow.front()!=8)
            {
                wow.pop();
            }
            else
            {
                n--;
            }
        }
        else if(turn==0)
        {
            if(wow.front()==8)
            {
                wow.pop();
            }
            else
            {
                n--;
            }

        }

    }
    if(wow.front()==8)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }



    return 0;
}
