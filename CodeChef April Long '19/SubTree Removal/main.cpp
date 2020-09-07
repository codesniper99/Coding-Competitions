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

struct node{
    ll val;
    vector<ll> children;

};

ll pruneornot( node lol , ll x, vector<node> &points, ll visited[])
{
    vector<ll> z =lol.children;
    //cout<<lol.val<<" \n";
    ll len = z.size();
    ll sum = 0;
    REP(i,0,len)
    {
        if( visited[z[i]]!=1 )
        {
            visited[ z[i] ]=1;
            sum+= pruneornot( points[z[i]], x , points, visited);
        }
    }
    return max(-x , lol.val + sum);
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll x;
        cin>>n>>x;

        ll visited[n];
        vi a(n);
        vector<node> points(n);
        points.clear();
        REP(i,0,n)
        {
            cin>>a[i];
            visited[i]=0;
            points[i].val=a[i];
        }
        ll u,v;
        REP(i,0,n-1)
        {
            cin>>u>>v;
            points[u-1].children.emplace_back(v-1);
            points[v-1].children.emplace_back(u-1);
        }
        visited[0]=1;
        cout<<pruneornot(points[0], x ,points,visited)<<"\n";

    }
    return 0;
}
