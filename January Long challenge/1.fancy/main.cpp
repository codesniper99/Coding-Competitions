//solvedd
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
int t;
cin>>t; cin.ignore();
while(t--){
        string x;
        getline(cin,x);
        string s;
        ll flag=0;

        stringstream ss;
        ss<<x;
        while(ss >>s)
        {
            if(s.compare("not")==0)
            {
                flag=1;
                break;
            }

        }
        if(flag)cout<<"Real Fancy\n";
        else cout<<"regularly fancy\n";
        flag=0;
    }






return 0;
}
