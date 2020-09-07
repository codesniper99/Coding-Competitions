//SOOLVED
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

	int n,k,s,t,counter,sum,temp;
	cin>>t;

	while(t--)
    {
		cin>>n>>k>>s;

		if(k>n)
		 cout<<"-1"<<endl;

		else if(s>=7 && (n-k)*6<k)
             cout<<"-1"<<endl;

		else{
            counter=0;
			temp=s*k;
			sum=0;
			while(true)
			{

				if(sum>=temp)
                    break;

				else
                {
					sum+=n;
					counter++;
				}
			}
			cout<<counter<<endl;
		}
	}
	return 0;
}
