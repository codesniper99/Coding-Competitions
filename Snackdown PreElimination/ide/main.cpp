#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int
using namespace std;

int main() {

	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll flag=0;
		long long a[n],b[m];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			flag=1;
		}
		for(ll i=0;i<m;i++)
		{
			cin>>b[i];
			if(b[i]==0)
			flag=1;
		}


		ll flag2=0;



		if(n==m)
		{
			if(flag==1)
			{
				cout<<"Alice\n";
				continue;
			}
			sort(a,a+n);
			sort(b,b+n);

			for(ll i=0;i<n;i++)
			{
				if(a[i]!=b[i])
                    flag2=1;
				break;
			}
			if(flag2==0)
			cout<<"Bob\n";
			else
			cout<<"Alice\n";
		}
		else
		{
			cout<<"Alice\n";
		}
	}
	return 0;
}
