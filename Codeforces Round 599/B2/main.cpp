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
    ll k;
    cin>>k;
    while(k--)
    {

        ll n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        ll count=0;
        ll b[26];
        memset(b,0,sizeof(b));
        ll a[26];
        memset(a,0,sizeof(a));
        rep(i,0,n)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        ll flag=0;
        rep(i,0,26)
        {
            if((a[i]+b[i])%2==1)
            {
                flag=1;break;
            }
        }
        if(flag)
        {
            cout<<"No\n";
            continue;
        }

        ll moves=0;
         vpi ans;
           ans.clear();

           rep(i,0,n)
           {
               if(s[i]!=t[i])
                {
                    ll yes=0;
                    //cout<<s[i]<<' '<<t[i];
                    rep(j,i+1,n)
                    {

                            if(s[j]!=t[j])
                            {
                                if(s[j]==s[i])
                                {
                                    ans.pb({j,i});

                                    s[j]=t[i];
                                    t[i]=s[i];
                                    moves++;
                                    yes=1;
                                    break;
                                }
                                else if(t[j]==s[i])
                                {
                                        ans.pb({j,j});
                                        ans.pb({j,i});
                                        t[j]=s[j];
                                        s[j]=t[i];
                                        t[i]=s[i];
                                        yes=1;
                                        moves+=2;
                                        break;
                                }
                                else
                                    ;

                            }
                            //c//out<<yes<<' '<<j<<'\n';;
                    }
                    if(yes!=1)
                        flag=1;
                    else
                        continue;

                }
           }

           if(flag)
           {
               cout<<"No\n";
               continue;
           }

        if(moves<=2*n){
           ll len=ans.size();
           cout<<"Yes\n";
           cout<<len<<'\n';
           rep(i,0,len)
           {
               cout<<ans[i].first+1<<' '<<ans[i].second+1<<'\n';
           }
        }
        else
            cout<<"No\n";


    }


    return 0;
}
