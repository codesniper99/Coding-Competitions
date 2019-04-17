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
    ll h,n;
    cin>>h>>n;
    ll max_damage=0;
    vi damage(n);

    ll cycle_damage=0;
    damage.clear();
    REP(i,0,n)
    {
        cin>>damage[i];


    }
    ll now=0;
    REP(i,0,n)
    {

         cycle_damage+=damage[i];
         if(damage[i]<0)
         now+=damage[i];
         else
            now=0;
         if(-now>-max_damage )
        {
           // cout<<cycle_damage<<" ";
            max_damage=now;

        }

    }
    //cout<<max_damage<<" ";
    ll hp=h;
    ll pos=0;ll flag=0;
    REP(i,0,n)
    {
        hp+=damage[i];
        if(hp<=0)
        {
            pos=i;
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<pos+1<<"\n";
    }
    else
    {
        if(cycle_damage>=0)
        {
            cout<<"-1\n";

        }
        else
        {
            ll cycles = (h/(-cycle_damage))-1;
            ll remaining_hp = h+cycles*cycle_damage;
            if(remaining_hp==0)
            {
                cout<<cycles*n<<"\n";
            }
            else
            {
                ll pos2=0,flag2=0;
                ll hp2=remaining_hp;
                //cout<<remaining_hp<<" ";
                REP(i,0,2*n)
                    {
                        if(i>=n)
                        hp2+=damage[i-n];
                    else
                        hp2+=damage[i];

                    if(hp2<=0)
                    {
                        pos2=i;
                                flag2=1;
                        break;
                    }

                }
                if(flag2)
                {
                     cout<<pos2+cycles*n+1<<"\n";
                }
            }

        }


    }



    return 0;
}
