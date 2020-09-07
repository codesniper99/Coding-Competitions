#include<stdio.h>
long long int opr(long long int n)
{
	long long int a=0,b=0,x;
	while(n!=0)
	{
		x=n%10;
		if(x%2==0)
		a+=x;
		else
		b+=x;
		n/=10;
	}
	if(a>b)
	return a-b;
	else
	return b-a;
}
int main()
{
	long long int c[2000000],b[1000000],t,x,k,j,n,i,a[2000000],s;
	for(i=2;i<2000000;i++)
	a[i]=opr(i);
	b[1]=2;
	for(i=2;i<=1000001;i++)
	b[i]=b[i-1]+i*a[i+1];

	c[2]=0;
	c[4]=4;
	x=2*a[5];
	for(i=6,j=1;i<=2000000;i+=2,j++)
	{
		c[i]=c[i-2]-j*a[j+3]+x+a[i];
		x+=2*(a[i]+a[i+1]-a[j+4]);
	}
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		s=b[n]+c[2*n];
		printf("%lld\n",s);
	}
	return 0;
}
