//solvedddddddd :DDD

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
 ll n;

bool isValid(ll row, ll col, ll board[50][50])
{
    return ((row >= 0) && (row < n) &&
           (col >= 0) && (col < n) && (board[row][col]==0) );
}

int main()
{
    ios::sync_with_stdio(0);


    cin>>n;
    ll board[50][50];
    bool visited[50][50];

    ll sx,sy,dx,dy;

    cin>>sx>>sy>>dx>>dy;
    sx--;
    sy--;
    dx--;
    dy--;

    string s;
    REP(i,0,n)
    {
        cin>>s;
        REP(j,0,n)
        {
            board[i][j]=s[j]-'0';
            visited[i][j]=false;
        }
    }

    queue< pair<ll,ll> > coords;
    vector< pair<ll,ll> >landmass1;
    vector< pair<ll,ll> >landmass2;

    coords.push(make_pair(sx,sy));
    visited[sx][sy]=true;
    ll flag=0;
    while(!coords.empty())
    {
        pair<ll,ll>p;
        p=coords.front();
       // cout<<p.first<<" "<<p.second<<"\n";

            //cout<<"Woohoo not visited "<<p.first<<", "<<p.second<<"\n";
            landmass1.push_back(p);
            if(p.first==dx&&p.second==dy)
                {
                    cout<<"0\n";
                    flag=1;
                    break;
                }
            coords.pop();
            if(isValid(p.first+1,p.second,board) && visited[p.first+1][p.second]==false)
                {
                    coords.push(make_pair(p.first+1,p.second));
                    visited[p.first+1][p.second]=true;

                }
            if(isValid(p.first,p.second+1,board)&& visited[p.first][p.second+1]==false)
                {
                    coords.push(make_pair(p.first,p.second+1));
                    visited[p.first][p.second+1]=true;

                }
            if(isValid(p.first-1,p.second,board) && visited[p.first-1][p.second]==false)
                {
                    coords.push(make_pair(p.first-1,p.second));
                    visited[p.first-1][p.second]=true;
                }
            if(isValid(p.first,p.second-1,board)&& visited[p.first][p.second-1]==false)
                {
                    coords.push(make_pair(p.first,p.second-1));
                    visited[p.first][p.second-1]=true;
                }

    }
    if(flag==1)
    {

        ;
    }
    else
    {
        REP(i,0,n)
    {
        REP(j,0,n)
        {
            visited[i][j]=false;
        }
    }
        coords.push(make_pair(dx,dy));
    visited[dx][dy]=true;

    while(!coords.empty())
    {
        pair<ll,ll>p;
        p=coords.front();
       // cout<<p.first<<" "<<p.second<<"\n";

           // cout<<"Woohoo not visited "<<p.first<<", "<<p.second<<"\n";
            landmass2.push_back(p);

            coords.pop();
            if(isValid(p.first+1,p.second,board) && visited[p.first+1][p.second]==false)
                {
                    coords.push(make_pair(p.first+1,p.second));
                    visited[p.first+1][p.second]=true;

                }
            if(isValid(p.first,p.second+1,board)&& visited[p.first][p.second+1]==false)
                {
                    coords.push(make_pair(p.first,p.second+1));
                    visited[p.first][p.second+1]=true;

                }
            if(isValid(p.first-1,p.second,board) && visited[p.first-1][p.second]==false)
                {
                    coords.push(make_pair(p.first-1,p.second));
                    visited[p.first-1][p.second]=true;
                }
            if(isValid(p.first,p.second-1,board)&& visited[p.first][p.second-1]==false)
                {
                    coords.push(make_pair(p.first,p.second-1));
                    visited[p.first][p.second-1]=true;
                }

    }

    ll mini=99999999;
    ll len1=landmass1.size();
    ll len2=landmass2.size();
    REP(i,0,len1)
    {

        REP(j,0,len2)
        {
           // cout<<landmass1[i].first<<" "<<landmass1[i].second<<" "<<landmass2[j].first<<" "<<landmass2[j].second<<"\n";
            ll dist1 = (landmass1[i].first-landmass2[j].first)*(landmass1[i].first-landmass2[j].first);
            ll dist2 =(landmass1[i].second-landmass2[j].second)*(landmass1[i].second-landmass2[j].second);
            ll ans=dist1+dist2;
            //cout<<dist1<<" "<<dist2<<"\n";
            if(ans<=mini)
            {
                mini=ans;
            }
        }
    }
    cout<<mini<<"\n";


    }





    return 0;
}
