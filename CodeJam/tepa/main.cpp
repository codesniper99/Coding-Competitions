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

#define foi(x) for (int i = 0; i < x; ++i)
#define foj(x) for (int j = 0; j < x; ++j)

int main()
{
    ios::sync_with_stdio(0);
    int t,w;
	cin>>t>>w;
	for(int q1=1;q1<=t;q1++){
		vi r(6),val(8);
		cout<<1<<endl;
		cout<<flush;
		cin>>val[1];
		cout<<2<<endl;
		cin>>val[2];
		cout<<4<<endl;
		cin>>val[4];
		cout<<5<<endl;
		cin>>val[5];
		cout<<6<<endl;
		cin>>val[6];
		cout<<7<<endl;
		cin>>val[7];
		int tmp = val[7]-val[6];
		r[0]=tmp/64;

		tmp=val[2]-4*r[0];
		int t1=val[1]-2*r[0];
		r[1]=tmp-t1;

		tmp=val[4]-16*r[0]-4*r[1];
		t1=val[2]-4*r[0]-2*r[1];
		r[2]=tmp-t1;

		tmp=val[4]-16*r[0]-4*r[1]-2*r[2];
		t1=val[1]-2*r[0]-r[1]-r[2];
		r[3]=tmp-t1;

		tmp=val[5]-32*r[0]-4*r[1]-2*r[2]-2*r[3];
		t1=val[1]-2*r[0]-r[1]-r[2]-r[3];
		r[4]=tmp-t1;

		tmp=val[6]-64*r[0]-8*r[1]-4*r[2]-2*r[3]-2*r[4];
		t1=val[1]-2*r[0]-r[1]-r[2]-r[3]-r[4];
		r[5]=tmp-t1;

		foi(6)
		cout<<r[i]<<" ";
		cout<<endl;
		int ans;
		cin>>ans;
		assert(ans);
	}
	return 0;




    return 0;
}
