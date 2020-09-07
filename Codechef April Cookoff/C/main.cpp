#include<bits/stdc++.h>
#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;


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
        ll n,a,b,x,y,z;
        cin>>n>>a>>b>>x>>y>>z;
        priority_queue<ll> c;
        ll sumas=0;
        REP(i,0,n)
        {
            ll yu;
            cin>>yu;
            c.push(yu);
            sumas+=yu;
        }
        ll days_b;
        if((z-b)%y == 0)
			days_b = ((z-b)/y)- 1;
		else
			days_b = (z-b)/y;

        if(days_b>=z)
        {
            cout<<"0\n";

        }

        else{
            ll max_choose=2*sumas;
            ll heighest=a+x*days_b;

           if(max_choose+ heighest<=z)
           {
               cout<<"RIP\n";
           }
           else
           {
               ll ans=0;
                while(heighest<z)
               {
                   ll q=c.top();
                   heighest+=q;
                   c.pop();
                   c.push(q/2);
                   ans++;

               }
               cout<<ans<<"\n";
           }
        }
    }

    return 0;
}
