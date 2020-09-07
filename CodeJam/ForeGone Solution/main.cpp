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
        string n;
        cin>>n;
        ll len=n.size();

        string a,b;
        a.clear();b.clear();
        len--;
        //cout<<len<<" ";
        while(len>=0)
        {
            if(n[len]=='4')
            {
                a+='3';
                b+='1';
            }

            else
            {
                a+=n[len];
                b+='0';
            }
            len--;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(b=="")
        {
            b="0";
        }
        cout<<"Case #"<<x-t<<": ";
        cout<<a<<" "<<b<<"\n";
    }



    return 0;
}
