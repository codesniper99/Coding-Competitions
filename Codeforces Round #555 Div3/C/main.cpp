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
    vi a(n);
    REP(i,0,n)
    {
        cin>>a[i];
    }
    ll maxi=-1;

    ll left=0,right=n-1;
    string ans;
    ans.clear();
    while(left<=right)
    {
        //cout<<left<<" "<<right;
        ll left_d =a[left];
        ll right_d =a[right];
        if(left_d<=maxi && right_d<=maxi)
        {
            break;
        }
        if(left_d<right_d)
        {
            if(left_d>maxi)
            {
                left++;
                maxi=left_d;
                ans+='L';
            }
            else if(right_d>maxi)
            {
                 right--;
                maxi=right_d;
                ans+='R';
            }
            else
                break;
        }
        else if(left_d==right_d)
        {
				int k=left,ma=0;
                while(k<=right-1 and a[k]<a[k+1])
                    ++k;
                ma=k-left;
                k=right;
                while(k>=left+1 and a[k-1]>a[k])
                    --k;
                if(ma>=(right-k))
                {
                    ans+='L';
                    left=0;
                    while(left<ma)
                        ans+='L',++left;
                }
                else
                {
                    ma=right-k;
                    ans+='R';
                    left=0;
                    while(left<ma)
                        ans+='R',++left;
                }
                break;
            }

        else
        {
            if(right_d>maxi)
            {
                right--;
                maxi=right_d;
                ans+='R';
            }
            else if(left_d>maxi)
            {
                left++;
                maxi=left_d;
                ans+='L';
            }
            else
                break;


        }
    }
    cout<<ans.size()<<"\n";
    cout<<ans<<"\n";



    return 0;
}
