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

bool checkanswer(string s)
{
    ll len=s.size();
    REP(i,0,len)
    {
        if(s[i]=='0')
            return false;

    }
    return true;

}

int main()
{
    ios::sync_with_stdio(0);
    ll x;
    cin>>x;
    string s;
    ll t=x;
    while(t)
    {
        s+=t%2+'0';
        t=t/2;
    }
    reverse(s.begin(),s.end());
    //cout<<s<<"\n";
    ll turn=0;
    ll ans=0;
    vi r;
    while(!checkanswer(s))
    {
        if(turn==0){
            ll len=s.size();
            ll pos=0;
            REP(i,0,len)
            {
            if(s[i]=='0')
            {
                pos=i;break;
            }
            }
            r.PB(len-pos);
          //  cout<<len-pos<<" ";
            REP(i,pos,len)
            {
                s[i] = ((s[i]-'0')^1)+'0';
            }
           //cout<<s<<"\n";
            ans++;
            turn^=1;
        }
        else
        {
            ll len=s.size();
            ll pos=len-1;
            ll sum = (s[len-1]-'0')^1;
            ll carry=(s[len-1]-'0')&1;
            s[len-1]=sum+'0';
            while(carry && pos>=0)
            {
                pos--;
                sum =((s[pos]-'0') ^ carry);
                carry = (s[pos]-'0')&carry;
                s[pos] = sum+'0';

            }
            ans++;
           //cout<<s<<"\n";

            turn^=1;


        }



    }
 cout<<ans<<"\n";
        ll len2=r.size();
        REP(i,0,len2)
        {
            cout<<r[i]<<" ";
        }



    return 0;
}
