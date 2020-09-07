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
    ll flag=0;
    ll len=s.size();
    vi a;
    vi b;
    vi c;
    a.clear();
    b.clear();
    c.clear();
    REP(i,0,len)
    {
            if(s[i]=='[')
            {
                a.PB(i);
            }
            else if(s[i]==':')
            {
                b.PB(i);
            }
            else if(s[i]==']')
            {
                c.PB(i);
            }
            else
                ;

    }
    ll s1,s2,s3,s4;
    REP(i,0,len)
    {
        if(s[i]=='[' && flag==0)
        {
            flag=1;
            s1=i;
        }
        if(s[i]==':'&& flag==1)
        {
            flag=2;s2=i;
        }
        if(s[i]==':'&& flag==2)
        {
            flag==3;s3=i;
        }
        if(s[i]==']'&& flag==3)
        {
            flag=4;s4=i;
        }

    }

    if(flag!=4)
    {
        cout<<"-1\n";
    }
    else{
        ll ans=0;
        ans+=s2-s1+1;
        ans+s4-s3+1;
        REP(i,s2,s3)
        {
            if(s[i]=='|')
            {
                continue;ans++;
            }
            else
                ;

        }
        cout<<ans<<'\n';
    }



    return 0;
}
