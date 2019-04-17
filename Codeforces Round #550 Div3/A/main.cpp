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
    while(n--)
    {

        s.clear();
        cin>>s;
        ll len=s.size();
        int maxi,mini;
        vi nums(26,0);
        nums.clear();
        REP(i,0,len)
        {
            nums[s[i]-'a']++;
        }
        ll start=-1;
        ll flag=0;
        REP(i,0,26)
        {
            if(nums[i]>=2)
            {
                flag=1;
                //cout<<i<<" ";
                break;
            }
            else
            {
                if(nums[i]==1 && start==-1)
                {
                    start=1;
                }
                if(start==1 && nums[i]==0)
                {
                    start=-2;
                    //cout<<"yo\n";
                }
                if(start==-2 && nums[i]==1)
                {
                    flag=1;
                    //cout<<i<<" "<<nums[i];
                    break;
                }

            }

        }
        if(flag)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }


    return 0;
}
