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

    ll n,I;
    cin>>n>>I;
    vi a(n);
    REP(i,0,n)
    {
        cin>>a[i];
    }
    ll limit = pow(2, double(double(8*I)/double(n)));

    ll distinct=0;
    ll window=0;
    map<ll,ll>m;
    map<ll,ll>tot;
    tot.clear();

    REP(i,0,n)
    {
        if(tot[a[i]]==0)
            distinct++;

        tot[a[i]]++;
    }

    cout<<distinct;

    if(distinct<=limit)
    {
        cout<<"0\n";
        return 0;
    }



    m.clear();
    ll mini=INF;
    ll backpointer=0;

    for(ll i=0;i<n;i++)
    {
        if(m[a[i]]>0)
        {
            m[a[i]]++;
            ll changes =0;
                for(auto x:tot)
                {
                    if(m[x.first]>0)
                    {
                        changes+=x.second-m[x.first];
                    }
                    else
                        changes+=x.second ;
                }
                if(changes<mini)
                    mini=changes;
        }
        else
        {
            if(distinct+1<=limit)
            {
                distinct++;

                m[a[i]]++;
                ll changes =0;
                for(auto x:tot)
                {
                    if(m[x.first]>0)
                    {
                        changes+=x.second-m[x.first];
                    }
                    else
                        changes+=x.second ;
                }
                if(changes<mini)
                    mini=changes;
            }
            else
            {
                ll changes=0;
                for(auto x:tot)
                {
                    changes+=x.second - m[x.first];
                }
                if(changes<mini)
                    mini=changes;

                while(distinct+1>limit)
                {
                    if(m[a[backpointer]]>0)
                    {
                        m[a[backpointer]]--;
                        if(m[a[backpointer]]==0)
                        {
                            distinct--;
                        }
                    }
                    backpointer++;
                }

                m[a[i]]++;
                ll changes =0;
                for(auto x:tot)
                {
                    if(m[x.first]>0)
                    {
                       if( x.first == a[i])
                       {

                       }
                    }
                    else
                        changes+=x.second ;
                }
                if(changes<mini)
                    mini=changes;

            }

        }

    }
    cout<<mini<<"\n";


    return 0;
}
