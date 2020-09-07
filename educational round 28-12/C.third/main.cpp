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


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    ll ang;
    while(t--)
    {

       cin>>ang;
        cout<<ang<<"k";
        vector<ll>factors;
        for(ll i=1;i<sqrt(ang);i++)
        {
            if(ang%i==0)
            {
                factors.PB(i);
                factors.PB(ang/i);
            }


        }
        double x=sqrt(ang);
        ll y=sqrt(ang);
        if(x-y==0.0)
        {
            factors.PB(y);

        }
        sort(factors.begin(),factors.end());



        ll len=factors.size();
ll flag=0;
      for(ll i=len-1;i>=0;i--)
        {
            ll num= 180/factors[i];
            double num1=180/(double)factors[i];
           // cout<<num1<<" ";
            if(num1-num==0.0)
            {

                ll q= ((num-2)*180)/num;

                if(q>=ang)
                {
                    cout<<num<<"\n";
                    flag=1;
                    break;
                }

            }
            else
                continue;



        }
        if(flag==0)
            cout<<"-1\n";

    }



    return 0;
}
