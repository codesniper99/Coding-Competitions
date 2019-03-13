//solvedd
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
int mini(int a, int b)
{ return (a < b)? a: b; }
int mini(int a, int b, int c)
{ return min(min(a, b), c);}
int maxi(int a, int b)
{ return (a > b)? a: b; }
int main()
{
    ios::sync_with_stdio(0);

    ll n,m;
    cin>>n>>m;
    ll boarda[n][m];
    ll boardb[n][m];
    REP(i,0,n)
    {
        REP(j,0,m)
        {

            cin>>boarda[i][j];
        }
    }
    REP(i,0,n)
    {
        REP(j,0,m)
        {

            cin>>boardb[i][j];
        }
    }
    ll flag=0;


    for (ll line=1; line<=(n + m -1); line++)
    {

        ll start_col =  maxi(0, line-n);

          ll count = mini(line, (m-start_col), n);
        vi numone;
        numone.clear();
        vi numtwo;
        numtwo.clear();
        for (ll j=0; j<count; j++)
            {
                numone.push_back(boarda[min(n, line)-j-1][start_col+j]);
                numtwo.push_back(boardb[min(n, line)-j-1][start_col+j]);
 //cout<< boardb[min(n, line)-j-1][start_col+j];

            }
        sort(numone.begin(),numone.end());
        sort(numtwo.begin(),numtwo.end());

        ll len=numone.size();
        REP(z,0,len)
        {
            //cout<<"yo-> "<<line<<" "<<numone[z]<<", "<<numtwo[z]<<"\n";
            if(numone[z]==numtwo[z])
                continue;
            else
            {flag=1;break;}

        }

        if(flag==1)
        {
            break;
        }
//cout<<"\n\n";
    }






    if(flag==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }


    return 0;
}
