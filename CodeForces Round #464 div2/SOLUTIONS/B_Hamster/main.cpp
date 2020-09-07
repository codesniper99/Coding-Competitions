#include<cstdio>
long long int n,k,a[100010],min,i;
main()
{
	scanf("%lld%lld",&n,&k);
	min=1;
	for(i=1;i<=k;i++)
    {
		scanf("%lld",&a[i]);
		min=n%a[min]>n%a[i]?i:min;
	}
	printf("%lld %lld",min,n/a[min]);
}
