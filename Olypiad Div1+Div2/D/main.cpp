
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

    ll n,m;
    bool visited[1001][1001];

    bool cango( vector< vector<char> >b)
    {
        queue<pair<ll,ll>> q;
        q.push({0,0});


        while(!q.empty())
        {

            pair<ll,ll>p=q.front();
            q.pop();
            ll x=p.first;
            ll y=p.second;

           // cout<<x<<" "<<y;
            if(x==n-1 &&y==m-1)
                return true;

            if(visited[x][y])
                continue;
            visited[x][y]=true;

            if( x+1<n && y<m && x+1>=0 && y>=0)
            {
                if( b[x+1][y]=='.')
                {
                    q.push({x+1,y});
                }
            }

            if( x<n && y+1<m && x>=0 && y+1>=0)
            {
                if( b[x][y+1]=='.')
                {
                    q.push({x,y+1});
                }
            }


        }

        return false;


    }

    int main()
    {
        IOS

        cin>>n>>m;
        vector< vector<char> >b(n, vector<char>(m,'.'));
        memset(visited,false,sizeof(visited));
        rep(i,0,n)
        {
            rep(j,0,m)
            cin>>b[i][j];

        }

         if((n==1||m==1) && n!=m)
        {
            if(cango(b))
                cout<<"1\n";
            else
                cout<<"0\n";
            return 0;
        }
        if(b[0][1]=='#')
        {
            if( b[1][0]=='#')
                cout<<"0\n";
            else
            {
                memset(visited,false,sizeof(visited));
                if(cango(b))
                    cout<<"1\n";
                else
                    cout<<"0\n";

            }
        }
        else
        {
            if( b[1][0]=='#')
                {
                    memset(visited,false,sizeof(visited));
                   if(cango(b))
                        cout<<"1\n";
                    else
                        cout<<"0\n";


                }
            else
            {
               // memset(visited,false,sizeof(visited));
               bool t=cango(b);
                if(t)
                    {
                        int ans=2;
                        b[0][1]='#';
                        memset(visited,false,sizeof(visited));
                         if(cango(b))
                            ans=min(ans,2);
                        else
                            ans=min(1,ans);

                        b[0][1]='.';
                        b[1][0]='#';
                        memset(visited,false,sizeof(visited));
                        if(cango(b))
                            ans=min(ans,2);
                        else
                            ans=min(ans,1);

                        cout<<ans<<'\n';
                    }
                else
                    {
                       cout<<"0\n";
                    }

            }

        }
        return 0;
    }
