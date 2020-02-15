//SOLVEDDD :DD
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
    while(t--)
    {

        ll k,n;
        ll a,b;
        cin>>n>>a>>b>>k;

        //case1
        if(a%b == 0)
        {

            ll ans=n/b- n/a;
            if(ans>=k)
                cout<<"Win\n";
            else
                cout<<"Lose\n";
        }
        else if(b%a==0)
        {

            ll ans = n/a- n/b;
            if(ans>=k)
                cout<<"Win\n";
            else
                cout<<"Lose\n";

        }
        else{
            ll ans= n/a +n/b -n/(a*b);
            //cout<<ans;
            if(ans>=k)
                cout<<"Win\n";
            else
                cout<<"Lose\n";
        }

    }



    return 0;
}
