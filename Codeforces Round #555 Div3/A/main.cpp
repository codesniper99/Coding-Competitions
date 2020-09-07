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
    ll a;
    cin>>a;
    vi dig;
    ll t=a;
    while(t)
    {
        dig.PB(t%10);
        t=t/10;

    }
    reverse(dig.begin(),dig.end());
    ll len=dig.size();
    len=len-1;
    ll sum=0;
    ll carry=0;
    map<ll,ll>num;
    num.clear();

    /*while(len>=0)
    {
      ll digit = dig[len];
        cout<<digit<<" "<<carry<<"\n";

        digit+=carry;

        if(digit<10)
            {   sum+=10-digit;
                carry=1;
            }
        else
        {
            sum+=10-digit;
            carry=1;
        }

        len--;
    }

    if(carry==1 && len==-1)
    {
        sum+=9;
    }
    cout<<sum+1<<"\n";
*/
ll number = a;
ll digits;
num.clear();
carry=0;
while(1)
{
    digits = a%10;
    if(num[a]==0)
    {
        ll y= 10-digits;
     sum+=10-digits;
    for(ll i=0;i<y;i++)
     {
         num[a+i]++;
     }
     a+=10-digits;
    // cout<<a<<" ";
     while(a%10==0)
     {
         a=a/10;

     }

    }
    else
    {
        break;
    }

}
ll count=0;
for(auto x:num)
{
     //cout<<x.first<<" ";
    count++;
}
cout<<count;

    return 0;
}
