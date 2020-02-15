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
    string s;
	ll flag=0;
	cin>>s;
	//cout<<s.size()<<'\n';
	while(s.size()){
		ll x=0;
		for(ll i=0;i<s.size()-1;i++){
			if(i>s.size())break;
			if(s[i]==s[i+1]){

				flag=1-flag;
				s.erase(i,2);
				i-=1;
				x=1;
			}
		}
		if(!x)break;
	}
	if(flag)cout<<"Yes";
	else cout<<"No";
	return 0;


    return 0;
}
