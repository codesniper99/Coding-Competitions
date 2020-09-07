#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	ll t,n,k;
	cin >> t;
	vector<int> a_cards(100000);

	vector<int> d_cards(100000);

	vector<int> b_cards(100000);

	for(int i=0;i<t;i++)
	{
		int c=0;
		cin >>n>> k;

		for(int j=0;j<n;j++)
			cin >> a_cards[j];
		for(int j=0;j<n;j++)
		{
			cin >> d_cards[j];
			c+=d_cards[j];
		}

		for(int j=0;j<k;j++)
			cin >> b_cards[j];

		int l, m,temporary;
	  for (l = 0; l < n-1; l++)
	      for (m = 0; m < n-i-1; m++)
                   if (a_cards[m] > a_cards[m+1])
              {
	               	temporary=a_cards[m];
	               	a_cards[m]=a_cards[m+1];
	               	a_cards[m+1]=temporary;
	               	temporary=d_cards[m];
	               	d_cards[m]=d_cards[m+1];
	               	d_cards[m+1]=temporary;
              }

		int q=0,u=n-1;

		for(int j=0;j<k;j++)
		{
			c-=b_cards[j]	;
			if(j%2)
			{
            while(c)
			{

					if(d_cards[u])
					{
						d_cards[u]--;c--;
					}
					else
						u--;
				}
			}
			else
			{
				while(c)
				{
					if(d_cards[q])
					{
						d_cards[q]--;c--;
					}
					else
						q++;
				}
			}
			c=b_cards[j];

		}
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=(a_cards[j]*d_cards[j]);

		}
		cout << sum << '\n';

	}
	return 0;
}
