#include<bits/stdc++.h>

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;

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
    ll t;
    cin>>t;ll k=t;
    while(t--)
    {
        ll p,q;
        cin>>p>>q;
       // ll upper_y=q,lower_y=0,upper_x=q,lower_x=0;
        ll x,y;
        char d;
        vi yc(q+1,0);
        vi xc(q+1,0);
        ll pos_x,pos_y;
        REP(i,0,p)
        {
            cin>>x>>y>>d;
            if(d=='N')
            {
                REP(i,y+1,q+1)
                {

                    yc[i]++;
                }

            }
            else if(d=='S')
            {

                for(ll i=y-1;i>=0;i--)
                {
                    yc[i]++;
                }

            }

            else if(d=='E')
            {
                REP(i,x+1,q+1)
                {
                    xc[i]++;
                }

            }
            else if(d=='W')
            {

                for(ll i=x-1;i>=0;i--)
                {
                    xc[i]++;
                }

            }
            ll maxi_x=-1,maxi_y=-1;
        REP(i,0,q+1)
        {
            //cout<<xc[i]<<" ";
            if(yc[i]>maxi_y)
            {
                maxi_y=yc[i];
                pos_y=i;
            }
            if(xc[i]>maxi_x)
            {
                maxi_x=xc[i];
                pos_x=i;
            }

        }

    }
       cout<<"Case #"<<k-t<<": "<<pos_x<<" "<<pos_y<<"\n";

    }


    return 0;
}
