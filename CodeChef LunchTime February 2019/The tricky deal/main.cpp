// solvedd
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

 #include<tgmath.h>
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


ll func(ll x,ll a)
{

    return (a*(x) - (pow(2,x)-1));
}
int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        ll mid,top=1000000000,bot=1;
        mid=(top+bot)/2;

        while(top>=bot)
        {
           // char x;

            if(func(mid,a)<0.00001 && func(mid,a)>=-0.00001)
                break;
            if(func(mid,a)>0)
            {
                bot=mid+1;
                mid=(top+bot)/2;

            }
            else if(func(mid,a)<0)
            {
                top=mid-1;
                mid=(top+bot)/2;
            }
        }
        //cout<<"profit min "<<mid<<"\n";
        cout<<mid<<" ";


        double ansss =log2(a);
        double ansss2=log2(a)+1;
        if(func(ansss,a)>=func(ansss2,a))
        {

            ll y=ansss;
            cout<<y<<"\n";
        }
        else
        {
            ll y=ansss2;
            cout<<y<<"\n";
        }


    }



    return 0;
}
