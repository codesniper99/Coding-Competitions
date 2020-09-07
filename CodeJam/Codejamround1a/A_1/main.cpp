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



int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    ll x=t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll ans=0;
        vector<string> a(n);
        map<string,ll> m;
        m.clear();
        REP(i,0,n)
        {
            cin>>a[i];
            string g=a[i];
            ll len=g.size();

        }
        vi done(n,0);
        done.clear();
        REP(i,0,n)
        {
            REP(j,0,n)
            {
                if(j!=i && done[j]!=1 && done[i]!=1)
                {
                    string s1=a[i];

                    string s2=a[j];
                   // cout<<s1<<" "<<s2<<"\n";
                    ll len1=s1.size();
                    ll len2=s2.size();
                    string d;
                    d.clear();
                    char c1=s1[len1-1];
                    char c2=s2[len2-1];

                    while(c1==c2 && len1>=1 && len2>=1)
                    {
                        char c1=s1[len1-1];
                        char c2=s2[len2-1];
                        if(c1==c2 && c1!=' ' &&len1>=1 && len2>=1)
                        {

                            d=c1+d;
                            len1--;
                            len2--;
                            continue;
                        }

                        if(m.find(d)==m.end())
                        {
                            m[d]++;
                           // cout<<"\n"<<d<<" ";
                            ans+=2;
                            done[j]=1;
                            done[i]=1;
                            break;

                        }
                        else
                        {
                            break;

                        }



                    }
                    // cout<<"\n D --> "<<d;
                     if(m.find(d)==m.end()&& d!="")
                     {
                            m[d]++;
                           // cout<<"\n"<<d<<" ";
                            ans+=2;
                            done[j]=1;
                            done[i]=1;
                            break;
                     }


                    if(done[j]==1)
                    {
                        break;
                    }
                    else
                    {
                        continue;

                    }

                }




            }


        }
        cout<<"Case #"<<x-t<<": ";
        cout<<ans<<"\n";






    }


    return 0;
}
