#include<iostream.h>
#include<

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
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m;
        vi fa(101,0);
        vi fb(101,0);

        vi a(m);
        rep(i,0,m)
        {
            cin>>a[i];
            fa[a[i]]++;
        }
        cin>>n;
        vi b(n);
        rep(i,0,n)
        {
            cin>>b[i];
            fb[b[i]]++;
        }
        // case1

        ll mini = min(n,m);
        ll free_list=0;
        ll requests=0;
        //cas1a
        ll ans=0;
        if(m>n)
        {

            rep(i,0,100)
            {
                if(fb[i]==0)
                    continue;
                else
                {
                    if(fb[i]==fa[i])
                        continue;
                    else if( fb[i]>fa[i])
                        modify+=fb[i]-fa[i];
                    else
                        ;

                }

            }

            ll answer =modify+m-n;
            ans=answer;


        }
        else
        {


            rep(i,0,100)
            {
                if(fb[i]==0)
                    continue;
                else
                {
                    if(fb[i]==fa[i])
                        continue;
                    else if( fb[i]>fa[i])
                        modify+=fb[i]-fa[i];
                    else
                        ;

                }

            }

            answer =min(answer,modify+n-m);

        }


        cout<<answer<<'\n';

    }

    return 0;
}
