#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


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

    ll n;
    cin>>n; ll y;        ll x;
    vector< pair<ll,ll> >a(n);
    a.clear();
    REP(i,0,2*n)
    {

        cin>>x;


        a.push_back(make_pair(x,i));

    }

    sort(a.begin(),a.end());

    ll sas=0;
    ll dim=0;
    ll last_sas=0;
    ll last_dim=0;
    for(ll i=0;i<=2*n-2;i+=2)
    {

   // cout<<sas<<" "<<dim<<a[i].second<<"\n";
        if(a[i].second<a[i+1].second)
        {
            sas+=abs(a[i].second-last_sas);
            last_sas=a[i].second;

            dim+=abs(a[i+1].second-last_dim);
            last_dim=a[i+1].second;
        }
        else
        {
            sas+=abs(a[i+1].second-last_sas);
            last_sas=a[i+1].second;
            dim+=abs(a[i].second-last_dim);
            last_dim=a[i].second;

        }

    }
   // cout<<sas<<" "<<dim<<"\n";
    cout<<sas+dim<<"\n";
    return 0;
}
