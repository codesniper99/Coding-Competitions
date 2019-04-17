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
    a.clear();
    map<ll,ll>m;
    m.clear();
    ll flag=0;

    REP(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]>=3)
        {
            flag=1;

        }
    }
    if(flag)
        cout<<"NO\n";
    else
    {
        ll flag2=0;
        vector<ll>incr;
        vector<ll>decr;
        incr.clear();
        decr.clear();
        ll maxi,mini;
        for(auto x:m)
        {
            if(x.second==2)
            {
                incr.push_back(x.first);
                decr.push_back(x.first);
                //m.erase(x);
            }
            else
            {
                ll maxi_len=incr.size();

                //sort(incr.begin(),incr.end());
                //sort(decr.begin(),decr.end());

                if(maxi_len>=1)
                    maxi=incr[maxi_len-1];
                else
                    maxi=-1;
                if(decr.size()>=1)
                    mini=decr[0];
                else
                    mini=LONG_MAX;
                if(x.first<mini)
                {
                    decr.PB(x.first);
                  //  m.erase(x);
                }
                else if(x.first>maxi)
                {
                    incr.PB(x.first);
                }
                else{
                    flag2=1;
                    cout<<"NO\n";
                    break;
                }

            }
        }

        if(!flag2){
            cout<<"YES\n";
            ll maxi_len=incr.size();
            ll mini_len=decr.size();

            //sort(incr.begin(),incr.end());
           // sort(decr.begin(),decr.end());

            cout<<maxi_len<<"\n";
            REP(i,0,maxi_len)
            {
                cout<<incr[i]<<" ";
            }
            cout<<"\n";
            cout<<mini_len<<"\n";
            for(ll i=mini_len-1;i>=0;i--)
            {
                cout<<decr[i]<<" ";
            }
            cout<<"\n";

        }
        else
            ;


    }

    return 0;
}
