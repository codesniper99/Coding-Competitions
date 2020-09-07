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

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll start,end,mid;
        start=2;
        end=n;
        mid=(start+end)/2;
        ll first;
        cout<<"1 "<<n-1<<" 1 ";
            REP(i,2,n+1)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            fflush(stdout);
            cin>>first;

        while(start<end )
        {
            mid=start+(end-start)/2;
            cout<<"1 "<<mid-start+1<<" 1 ";
            REP(i,start,mid+1)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            fflush(stdout);
            ll x;
            cin>>x;
            if(x==first)
            {
                end=mid;
            }
            else
            {
                start=mid+1;
            }
        }
        cout << "1 " << n-1 << " " << start << " ";
		REP(i, 1, n+1)
			if( i == start )
				continue;
			else
				cout << i << " ";
		cout << '\n';
		ll y;
		cout.flush();
		cin >> y;
		cout << "-1 " << y << '\n';
      }
    return 0;
}
