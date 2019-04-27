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
        ll n,q;
        cin>>n>>q;
        vi value(n);
        map<ll,ll>m;
        m.clear();
        map<ll,ll>counter;
        counter.clear();
        REP(i,0,n)
        {
            cin>>value[i];
            counter[value[i]]++;
            m[value[i]]++;
        }
        map<ll,ll>behindmfs;
        behindmfs.clear();
        ll count=0;

        for(auto x:m)
        {
            behindmfs[x.first] = count;
            count+=counter[x.first];
        }

        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            cout<<y-x + abs(value[x-1]-value[y-1])<<" ";

            if(value[x-1]!=value[y-1])
                {
                    if(value[y-1]>value[x-1])
                    {
                    cout<<abs(behindmfs[value[x-1]]-behindmfs[value[y-1]])+counter[value[y-1]]<<"\n";
                    }
                    else
                    {
                        cout<<abs(behindmfs[value[x-1]]-behindmfs[value[y-1] ])+counter[value[x-1]]<<"\n";
                    }
                }
            else
                cout<<counter[value[x-1]]<<"\n";
        }
    }
    return 0;
}

