//Solvedd :DD
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
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > a(n);
    vector<pair<ll,ll> > b(m);

    REP(i,0,n){cin>>a[i].first;a[i].second=i;}
    REP(j,0,m){cin>>b[j].first;b[j].second=j;}

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

  /*  REP(i,0,n){
    cout<<a[i].first<<","<<a[i].second<<'\n';}
    cout<<"woot\n";
    REP(i,0,m){
    cout<<b[i].first<<","<<b[i].second<<'\n';}
*/
    if(n==m){
        REP(i,0,n){
        cout<<a[i].second<<" "<<b[0].second<<'\n';
        }
        REP(i,1,m){
        cout<<a[n-1].second<<" "<<b[i].second<<"\n";
        }
    }
    else
    {
        if(n>m){
            REP(i,0,n)
            {
                cout<<a[i].second<<" "<<a[0].second<<'\n';
            }
            REP(i,1,m){
                cout<<a[n-1].second<<" "<<b[i].second<<"\n";
            }
        }
        else
        {
           REP(i,0,m)
            {
                cout<<a[0].second<<" "<<b[i].second<<'\n';
            }
            REP(i,1,n){
                cout<<a[i].second<<" "<<b[m-1].second<<"\n";
            }

        }

    }


    return 0;
}
