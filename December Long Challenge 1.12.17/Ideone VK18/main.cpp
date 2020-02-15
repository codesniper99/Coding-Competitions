#include<bits/stdc++.h>
using namespace std;
int s[2000000];

int sum(int k)
{
	if(s[k-1]!= -1)
        return s[k-1];

	else if(k<=9)
	{
	s[k-1]=k;
	return s[k-1]; }

	else {
            int r,t,p=0;
		for( t=1;t<=6;t++)
		{ if(k/pow(10,t)==0) break; }

		  for(int i=1;i<=t;i++)
		  { r=k%10;
		   k=k/10;
		  p=p-(pow(-1,i))*r;
		  }
		  if(p<0)
		  p=-p;

		  s[k-1]=p;
	}
	return s[k-1];

}

int main()
{ for(int i=0;i<2000000;i++)
{ s[i]=-1; }
	int T;
	cin>>T;
	for(int p=0;p<T;p++)
	{ int n;
	cin>>n;
	int count =0;
	int k;
	for(int i=0;i<n;i++)
	{  k=2*(i+1);
	  count += sum(k);
	}
	for(int i=1;i<=n;i++)
	{ for(int j=1;j<=n;j++)
	{
		k=i+j+2;
		count = count + sum(k);
	}
	}
	cout<<count;
	cout<<endl;

	}
	return 0;
}
