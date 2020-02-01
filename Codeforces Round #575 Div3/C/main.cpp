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

struct robo{

ll x,y,f1,f2,f3,f4;

};


void solve()
{
    ll n;
    cin>>n;
    vector<robo> r(n);
    ll cent_x=0,cent_y=0;
    REP(i,0,n)
    {
        cin>>r[i].x>>r[i].y>>r[i].f1>>r[i].f2>>r[i].f3>>r[i].f4;


        cent_x+=r[i].x;
        cent_y+=r[i].y;
    }
/*
    REP(i,0,n)
    {
        if(cent_x>0)
        {
            if(r[i].f3==0)
                cent_x-=r[i].f3;
        }
        else
        {
            if(r[i].f1==0)
                cent_x-=r[i].f1;
        }
        if(cent_y>0)
        {
            if(r[i].f4==0)
                cent_x-=r[i].f4;
        }
        else
        {
            if(r[i].f2==0)
                cent_x-=r[i].f2;
        }

    }*/
  /*  if(cent_x%n!=0)
    {cout<<"0\n";return;}
    if(cent_y%n!=0)
    {cout<<"0\n";return;}
*/
    cent_x/=n;
    cent_y/=n;


    ll total_move_x=0,total_move_y=0;
    ll flag=0;
    REP(i,0,n)
    {
        ll direc_x,direc_y;
        direc_x = cent_x-r[i].x;
        direc_y = cent_y-r[i].y;

        if(direc_x>0)
        {
            if( total_move_x>=0)
            {
                if(r[i].f3==1 )
                    total_move_x+=direc_x;
                else
                {
                    cout<<"0\n";
                    flag=1;break;
                }
            }
            else
            {
                if(r[i].f1==0 )
                {
                        if(r[i].f3==1 )
                            total_move_x+=direc_x;
                         else
                        {
                            cout<<"0\n";flag=1;
                            break;
                        }
                }
                else
                {
                    cout<<"0\n";flag=1;
                    break;
                }

            }

        }
        else if( direc_x<0)
        {
            if( total_move_x<=0)
            {
                if(r[i].f1==1 )
                    total_move_x+=direc_x;
                else
                {
                    cout<<"0\n";
                    flag=1;break;
                }
            }
            else
            {
                if(r[i].f3==0 )
                {
                        if(r[i].f1==1 )
                            total_move_x+=direc_x;
                         else
                        {
                            cout<<"0\n";flag=1;
                            break;
                        }
                }
                else
                {
                    cout<<"0\n";flag=1;
                    break;
                }

            }

        }
        if(direc_y>0)
        {
            if( total_move_y>=0)
            {
                if(r[i].f2==1 )
                    total_move_y+=direc_y;
                else
                {
                    cout<<"0\n";flag=1;
                    break;
                }
            }
            else
            {
                if(r[i].f4==0 )
                {
                        if(r[i].f2==1 )
                            total_move_y+=direc_y;
                         else
                        {
                            cout<<"0\n";flag=1;
                            break;
                        }
                }
                else
                {
                    cout<<"0\n";flag=1;
                    break;
                }

            }

        }
        else if(direc_y<0)
        {
          if( total_move_y<=0)
            {
                if(r[i].f4==1 )
                    total_move_y+=direc_y;
                else
                {
                    cout<<"0\n";flag=1;
                    break;
                }
            }
            else
            {
                if(r[i].f2==0 )
                {
                        if(r[i].f4==1 )
                            total_move_y+=direc_y;
                         else
                        {
                            cout<<"0\n";flag=1;
                            break;
                        }
                }
                else
                {
                    cout<<"0\n";flag=1;
                    break;
                }

            }
        }


    }

    if(flag)
    {
        return;
    }
    else
    {
        cout<<"1 "<<cent_x<<" "<<cent_y<<"\n";
        return;
    }
    return;

}





int main()
{
    ios::sync_with_stdio(0);
    ll q;
    cin>>q;
    while(q--)
    {
        solve();
    }



    return 0;
}
