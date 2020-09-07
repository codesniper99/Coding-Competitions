#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll results[1000001];
ll diamondsofrooms[2000002];

inline ll diamonds(ll x)
{
	ll odd=0,even=0;
	while(x>0)
	{
		if(x%2==0)
		even+=x%10;
		else
		odd+=x%10;
		x=x/10;
	}
	return abs(even-odd);

}

int main()
{
	ll t;
	ios::sync_with_stdio(false);

	cin>>t;
	memset(diamondsofrooms,0,sizeof(0));
   memset(results,0,sizeof(results));
   results[1]=2;int big;
	while(t--)
	{
		ll n,z=1;
		register ll sum=0;
		cin>>n;
		for(ll i=2;i<=n;i++)
		{

		    if(diamondsofrooms[i]!=0)
                sum+=diamondsofrooms[i]*z;

            else
			{ sum+=z*diamonds(i);
			  diamondsofrooms[i]=diamonds(i);
			}

			if(i<=n)
			 z++;
			else
			 z--;
        }
    // simply
		cout<<sum<<endl;
}
	return 0;
}
