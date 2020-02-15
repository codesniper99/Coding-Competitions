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


int main()
{
    IOS
    ll n,a,b,k;
    cin>>n>>a>>b>>k;
    vi h(n);
    rep(i,0,n)
        cin>>h[i];
    vi ind;
    ind.clear();
    ll points=0;
    rep(i,0,n)
    {
        ll left = h[i]%(a+b);
        //cout<<left<<' ';
        if(left>a || left==0)
            {ind.pb(i);}//cout<<i<<' ';}
        else
            points++;
    }
//cout<<'\n';
    ll len = ind.size();
    rep(i,0,len)
    {
        ll left =h[ind[i]]%(a+b);
        if(left==0)
            left = a+b;
        left -= a;
        ind[i] = left;
        //cout<<left<<','<<ind[i]<<' ';
    }
   // cout<<'\n';
    sort(ind.begin(),ind.end());
    ll pointstogive = k*a;
    //cout<<points<<' ';
    rep(i,0,len)
    {
        //cout<<ind[i]<<' ';
        if(pointstogive<=0)
            break;
        else
        {
            if(ind[i]<=pointstogive)
                {
                    ll g = ceil((double)ind[i]/(double)a);
                    //cout<<g<<'t';
                    points++ ;
                    pointstogive-= g*a;

                }
            else
            {
               break;
            }

        }

    }
    cout<<points<<'\n';


    return 0;
}
