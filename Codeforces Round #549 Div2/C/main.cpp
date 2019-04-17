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

struct Node {
   int num;
   int resp;
   int alive;
   vector<ll>children;  // An array of pointers for N children
};


int main()
{
    ios::sync_with_stdio(0);

    ll n;
    cin>>n;
    vi parent(n);vi respect(n);

    vector<Node> arra(n);
    REP(i,0,n)
    {
        cin>>parent[i]>>respect[i];

        arra[parent[i]-1].children.push_back(i);
        arra[i].num=i;
        arra[i].alive=1;
        arra[i].resp=respect[i];
    }
 //cout<<"\n";
    REP(i,0,n)
    {
        REP(i,0,n)
        {
              ll len=arra[i].children.size();
            REP(j,0,len)
            {
                if(arra[i].alive==1);
                   // cout<<i+1<<" ->"<<arra[i].children[j]+1<<" ";
            }
    //    cout<<"\n";
        }
        if(arra[i].resp=1 && arra[i].alive==1)
        {
            ll len=arra[i].children.size();
            ll counter=0;
            REP(j,0,len)
            {

                if(arra[arra[i].children[j]].resp==1 && arra[arra[i].children[j]].alive==1)
                {
                    counter++;
                }
                else if(arra[arra[i].children[j]].resp==-1)
                {
                    counter+=1;
                    arra[arra[i].children[j]].alive=0;
                }
                else
                    ;

            }
            if(counter==len)
            {
                cout<<i+1<<" ";
                arra[i].resp=-1;
                arra[i].alive=0;

              for (auto j = arra[parent[i]-1].children.begin(); j != arra[parent[i]-1].children.end(); ++j) {
        if ( *j == i) {
            arra[parent[i]-1].children.erase(j);
            j--;
        }
              }
               ll len=arra[i].children.size();


            ll counter=0;
            REP(j,0,len)
            {
                arra[parent[i]-1].children.push_back(arra[i].children[j]);
            }
             arra[i].children.clear();

            }
        }


    }








    return 0;
}
