#include <bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define mod 1000000007
#define us unsigned short
#define IOS ios_base::sync_with_stdio(0);
#define INF LONG_MAX
#define PI 3.1415926535897932384626
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define rep(x,j,n)for(int x=j;x<n;x++)
typedef vector<pair<ll,ll>> vpi;
typedef vector<ll> vi;
typedef vector<vi> vvi;

ll modexp(ll a,ll b,ll m)
{
	ll r=1;
	a=a%m;
	while(b>0)
	{
	if(b&1)
		r=(r*a)%m;
	b=b/2;
	a=(a*a)%m;
	}
	return r%m;
}

ll degree[100001];
vi adj[100001];
 vi answer(100001,1);
 bool visited[100001];

 vi temp;

 void dfs(ll v)
 {
     visited[v]=true;
     //cout<<v<<' ';
     temp.pb(v);
    ll edges=0;
     for(auto u:adj[v])
     {
         if(!visited[u])
         {
             dfs(u);
         }
     }


 }

void solve()
{
    memset(degree,0,sizeof(degree));
    ll n,m;
    cin>>n>>m;
    answer.clear();
    ll tt,ty;
    rep(i,0,n)
        adj[i].clear();

    rep(i,0,m)
    {
        ll u,v;
        cin>>u>>v;
        tt=u;
        ty=v;
        degree[u]++;
        degree[v]++;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(m%2==0)
    {
        cout<<"1\n";
        rep(i,0,n)
            cout<<"1 ";
        cout<<"\n";
        return ;
    }
    else
    {

        ll f=0;
        rep(j,1,n+1)
         {
                 if(degree[j]%2==1)
                    {
                        f=1;
                        answer[j]=2;
                        break;
                    }
                if(degree[j]>0)
                {
                    tt=j;
                }

        }

        if(f==0)
        {
            answer[tt]=2;
            answer[adj[tt][0]]=3;

        }

        ll flag=0;
        rep(i,1,n+1)
        {
            if(answer[i]==3)
            {
                flag=1;
            }
        }

        if(flag)
        {
            cout<<"3\n";
            rep(i,1,n+1)
                cout<<answer[i]<<' ';
            cout<<'\n';
        }
        else
        {
            cout<<"2\n";
            rep(i,1,n+1)
                cout<<answer[i]<<' ';
            cout<<'\n';

        }


    }

}



int main()
{
   // IOS
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
/*

1
9
9
1 2
2 3
3 1
4 5
5 6
4 6
7 8
7 9
8 9


1
10 11
2 5
2 4
5 4
5 6
4 6
5 9
9 10
10 3
3 8
8 7
7 4


*/
