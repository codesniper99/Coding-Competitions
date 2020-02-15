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
        ll n;
        cin>>n;
        vi a(n);
        vi d(n);
        REP(i,0,n)
        {
            cin>>a[i];
        }
        REP(i,0,n)
        {
            cin>>d[i];
        }

/*
        if(d[n-1]>d[0] && d[n-1]>d[1])
            d[n-1]-=a[0];
        else if(d[1]>d[0] && d[1]>=d[n-1])
            d[1]-=a[0];
        else
            ;

        REP(i,1,n)
        {
            ll pos=0;
            if(d[i+1]>d[i] && d[i+1]>=d[i-1])
                d[i+1]-=a[i];
            else if(d[i-1]>d[i] && d[i-1]>=d[i+1])
                d[i-1]-=a[i];
            else
                ;

        }

        ll maxi=-1;
        REP(i,0,n)
        {
            if(d[i]>maxi)
                maxi=d[i];
        }
        cout<<maxi<<'\n';
*/

    vi threat(n);
    REP(i,0,n)
    {
        if(i==0)
        {
            threat[i]=d[i]-a[1]-a[n-1];
            if(threat[i]<0)
                threat[i]=-1;
        }
        else if(i==n-1)
        {
            threat[i]=d[i]-a[0]-a[n-2];
            if(threat[i]<0)
                threat[i]=-1;
        }
        else
        {
             threat[i]=d[i]-a[i+1]-a[i-1];
            if(threat[i]<0)
                threat[i]=-1;
        }

    }
    ll pos=0;
    ll maxi=-1;
    REP(i,0,n)
    {
        if(d[i]>maxi && threat[i]>0)
            {maxi=d[i];pos=i;}
    }

    if(maxi>0)
        cout<<d[pos]<<'\n';
    else if(maxi<=0)
        cout<<"-1"<<'\n';

    }




    return 0;
}
