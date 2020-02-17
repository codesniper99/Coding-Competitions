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

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll alpa[26];
        memset(alpa,0,sizeof(alpa));
        ll n= s.size();
        ll count=0;
        rep(i,0,n)
        {
            alpa[s[i]-'a']++;
        }
        vi uni;
        rep(i,0,26)
        {
            if(alpa[i]!=0)
                uni.pb(i);
        }

        ll flag=0;
        map<ll,ll>m;
        m.clear();
        ll pos=2;

        ll last = 1;
        m[s[0]-'a']=1;
        vi adj[26];
        map<pair<ll,ll>,ll>edges;
        rep(i,1,n)
        {
            if(m[s[i]-'a']==0)
            {
                m[s[i]-'a']=pos;
                edges[{last,pos}]=1;

                edges[{pos,last}]=1;
                last=pos;
                pos++;

            }
            else
            {
                edges[{last,m[s[i]-'a']}]=1;
                edges[{m[s[i]-'a'],last}]=1;
                last = m[s[i]-'a'];

            }
            if(flag)
                break;


        }
        ll deg[26];
        string answ;
        memset(deg,0,sizeof(deg));
        for(auto y:edges)
        {
            pair<ll,ll>p=y.first;
            if(edges[{p.first,p.second}]==1 )
                {
                    deg[p.first]++;
                    deg[p.second]++;

                    edges[{p.first,p.second}]=0;

                    edges[{p.second,p.first}]=0;
                }

        }
        ll timeb=0;
        for(ll i=0;i<26;i++)
        {
            if(deg[i]>2)
                flag=1;
            if(deg[i]==1)
                timeb++;

        }
        if(timeb>2||timeb<1)
            flag=1;








       // for(auto x:m)
       //     cout<<x.first+'a'<<' '<<x.second<<'\n';
        if(flag)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(auto x:m)
                cout<<char(x.first+'a');

            rep(i,0,26)
            {
                if(alpa[i]==0)
                    cout<<char(i+'a');
            }
            cout<<'\n';
        }

    }


    return 0;
}
