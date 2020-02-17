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
    ll n,m;
    cin>>n>>m;
    vector<string>input(n);
    rep(i,0,n)
        cin>>input[i];

    map<string,ll>mm;
    mm.clear();
    rep(i,0,n)
    {
        mm[input[i]]++;

    }
    string standalone;
    standalone.clear();

    vector<string>palindromes;
    rep(i,0,n)
    {
        rep(j,0,mm[input[i]]/2)
        palindromes.pb(input[i]);
        mm[input[i]]= mm[input[i]]%2;


    }
    rep(i,0,n)
    {
        string x  =input[i];
        reverse(x.begin(),x.end());
        if( x!= input[i] && mm[x] && mm[input[i]])
        {
            palindromes.pb(x);
            mm[x]--;
            mm[input[i]]--;
        }

    }
    rep(i,0,n)
    {
        if(mm[input[i]]>0){
            ll f=0;
            ll len = input[i].size();
            string temp=input[i];
            for(ll j=0;j<=(len)/2;j++)
            {
                if(temp[j] == temp[len-j-1])
                    continue;
                else
                {
                    f=1;
                    break;
                }

            }
            if(!f){
                    if(input[i].size()>standalone.size())
                        standalone=input[i];
                }
        }

    }
    ll len=palindromes.size();
    //cout<<standalone<<'\n';

        string ans;
        rep(i,0,len)
            ans+=palindromes[i];
        string cc = ans;
        ans+=standalone;
        reverse(cc.begin(),cc.end());
        ans+=cc;
        cout<<ans.size()<<'\n'<<ans<<'\n';



    return 0;
}
