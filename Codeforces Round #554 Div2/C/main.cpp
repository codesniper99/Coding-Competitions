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
    ll a,b;
    cin>>a>>b;
    ll dif=abs(a-b);
    if(a>b)
        swap(a,b);
    //a<b
    if(b%a==0)
        cout<<"0\n";
    else
    {
        ll k=0;
        ll closest = ceil((double)a/(double)dif);
        ll dog = closest*dif;
        /*ll x = floor(double(dog)/(double)a);
        ll closester = dog/x;


        k =closester-a;
        cout<<k<<"\n";
        */
        //cout<<dog;
        vi factors;
        factors.clear();
        REP(i,1,sqrt(dog))
        {
            if(dog%i==0)
                {factors.PB(i);factors.PB(dog/i);}
        }
        double f= sqrt(dog);
        ll f2 = sqrt(dog);
        if(f-f2==0.0)
        {
            factors.PB(sqrt(dog));
        }

        sort(factors.begin(),factors.end());
        ll len=factors.size();
        ll indice=0;
        while(factors[indice]<a)
        {
            indice++;
        }
        cout<<factors[indice]-a;



    }



    return 0;
}
