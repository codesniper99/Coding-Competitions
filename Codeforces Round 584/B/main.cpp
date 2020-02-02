    #include <bits/stdc++.h>
    #pragma gcc optimize("ofast")
    using namespace std;
    //#define FILE_IO
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


    int main()
    {
        IOS
        #ifdef FILE_IO
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("debug.txt", "w", stderr);
        #endif
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vi a(n);
        vpi b(n);
        rep(i,0,n)
        {
            ll g;

            cin>>a[i]>>g;
            b[i]=mp(g,a[i]);
        }


        sort(b.begin(),b.end());
        ll maxi=0;
        rep(i,0,n)
        {
            if(s[i]=='1')
                maxi++;
        }
        ll toggle[n];
        //cout<<"cycle - "<<cycle<<'\n';
        rep(i,0,n)
        {
            toggle[i]=s[i]-'0';
        }
        //ll end_time = b[n-1].first+cycle;
        //cout<<"et - "<<end_time<<'\n';

        rep(t,1,1001)
        {
            ll curr=0;
            rep(i,0,n)
            {
                if((t-b[i].first)>=0)
                    if( ((t-b[i].first)%b[i].second==0) )
                        {
                            toggle[i]^=1;
                        }
                if(toggle[i])
                    curr++;
            }

            if(curr>=maxi)
                {maxi=curr;}//cout<<t<<" "<<curr<<'\n';}
        }
        cout<<maxi<<'\n';



    /*


    */

        return 0;
    }
