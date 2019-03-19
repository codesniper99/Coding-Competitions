//sooolved :DD
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
    string l,r;
    cin>>l;cin>>r;
    vector<pair<ll,ll>>anss;

    multimap<char,ll>right;
    right.clear();

    REP(i,0,n)
    {
        right.insert(make_pair(r[i],i+1));
    }

    ll ans=0;
    REP(i,0,n)
    {
        char lefter=l[i];
        if(right.find(lefter)!=right.end() && lefter!='?')
        {
           // cout<<"found "<<lefter<<"\n";
           // cout<<i+1<<" "<<right.find(lefter)->second<<"\n";
            anss.push_back(make_pair(i+1,right.find(lefter)->second));
            auto x=right.find(lefter);
            right.erase(x);
            ans++;
        }
        else if(lefter!='?')
        {
            if(right.find('?')!=right.end() )
        {
           // cout<<"found "<<lefter<<"\n";
            //cout<<i+1<<" "<<right.find('?')->second<<"\n";
            anss.push_back(make_pair(i+1,right.find('?')->second));

            auto x=right.find('?');
            right.erase(x);
            ans++;
        }

        }


    }
    REP(i,0,n)
    {
        char lefter=l[i];
        if (lefter=='?')
        {
            for(auto itr = right.begin(); itr != right.end(); ++itr)
            {
               // cout<<i+1<<" "<<itr->second<<"\n";
                anss.push_back(make_pair(i+1,itr->second));

                right.erase(itr);
                ans++;

                break;

            }
        }

    }

    cout<<ans<<"\n";
    ll len=anss.size();
    REP(i,0,len)
    {
        cout<<anss[i].first<<" "<<anss[i].second<<"\n";
    }



    return 0;
}
