#include<cstdio>
#define ll long long
using namespace std;
int n,ans,l,r;
ll max1,sum,a[100100],s[100100];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	scanf("%d%d",&l,&r);r--;
	ans=1;
	for(int i=l;i<=r;i++)sum+=a[i];
	max1=sum;
	for(int i=2;i<=n;i++)
	{
		sum-=a[r--];
		if(!r)r=n;
		l--;if(!l)l=n;
		sum+=a[l];
		if(sum>max1){max1=sum;ans=i;}
	}
	printf("%d",ans);
}
