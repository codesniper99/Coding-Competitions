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

        ll w;
        cin>>w;

    while(t--)
    {
        if(w==6){
        ll x1,x2,x3,x4,x5,x6;
        ll d1,d2,d3,d4,d5,d6,d7;
        cout<<"6\n";
        fflush(stdout);
        cin>>d6;
        cout<<"7\n";
        fflush(stdout);
        cin>>d7;
        x1=d7-d6;
        cout<<"5\n";
        fflush(stdout);
        cin>>d5;
        cout<<"4\n";
        fflush(stdout);
        cin>>d4;
        cout<<"1\n";
        fflush(stdout);
        cin>>d1;
        cout<<"2\n";
        fflush(stdout);
        cin>>d2;

        //cout<<"\n";
       // cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<d5<<" "<<d6<<" ";
        x5 = d5-d4-x1;
        x2 =d2-d1-x1;
        x4 = d1-d6+d4;
        x3 =d4-d2-2*x1-x2-x4;
        x6 = d6-d5-x1-x3-x2;
        cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<x6<<"\n";
        fflush(stdout);
        ll lol;
        cin>>lol;
        if(lol==-1)
            break;
        }
        else
        {
            ll d1,d2;
            cout<<"1\n";
            fflush(stdout);
            cin>>d1;
            cout<<"2\n";
            fflush(stdout);
            cin>>d2;
            cout<<"1 1 1 1 1 1\n";
            fflush(stdout);
            ll lol;
            cin>>lol;
        if(lol==-1)
            break;
        }

    }



    return 0;
}
