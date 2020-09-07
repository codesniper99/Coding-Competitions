//solved
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
ll n=1000,k=1000;
vi sum(n,0);
 ll a[1000][1000];

double solve(ll ball_color, ll bucket){

    if(bucket==1)
    {
        double prob= (double)a[0][ball_color-1]/(double)sum[0];
        return prob;
    }
    else{

    double prob_added = (((double)a[bucket-1][ball_color-1]+1)/((double)sum[bucket-1] +1)) * solve(ball_color,bucket-1);
    double prob_not_added =(((double)a[bucket-1][ball_color-1])/((double)sum[bucket-1] +1))*(1-solve(ball_color,bucket-1)) ;

    return prob_added+prob_not_added;



    }
}

int main()
{
    ios::sync_with_stdio(0);

    cin>>n>>k;

    cout<<setprecision(12)<<fixed;

    REP(i,0,n)
    {
        REP(j,0,k)
        {
            cin>>a[i][j];
            sum[i]+=a[i][j];

        }

    }




    REP(i,0,k)
    {

       cout<< solve(i+1,n) <<" ";
    }


    return 0;
}
