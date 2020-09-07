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


bool isValid(ll row, ll col, ll board[50][50],ll rowmax,ll colmax)
{
    return ((row >= 0) && (row < rowmax) &&
           (col >= 0) && (col < colmax) && (board[row][col]==0) );
}
ll product(int x)
{
	int prod = 1;
	while (x) {
		prod *= (x % 10);
		x /= 10;
	}
	return prod;
}


ll findNumber(ll l, ll r)
{

	ll t;
	t=l;
	//string a = itoa(l);
string a;string b ;
a.clear();
b.clear();
	while(t)
    {
        a+=(t%10+'0');
        t=t/10;

    }
    reverse(a.begin(),a.end());

	t=r;
	while(t)
    {
        b+=((t%10)+'0');

        t=t/10;

    }
    reverse(b.begin(),b.end());

	ll ans = r;
	for (ll i = 0; i < b.size(); i++) {
		if (b[i] == '0')
			continue;


		string curr = b;
		curr[i] = ((curr[i] - '0') - 1) + '0';


		for (ll j = i + 1; j < curr.size(); j++)
			curr[j] = '9';

		ll num = 0;
		for (auto c : curr)
			num = num * 10 + (c - '0');

		if (num >= l && product(ans) < product(num))
			ans = num;
	}

	return ans;
}


int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    ll d=findNumber(1,n);

    ll ans=1;
    while(d)
    {
        ans*=d%10;
        d=d/10;

    }
    cout<<ans<<"\n";
    return 0;
}
