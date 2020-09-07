#include<stdio.h>

int main()
{
long long int r,b,g;
scanf("%lld %lld %lld",&r,&g,&b);
long long int min=1000001;
if(r<min)
min=r;
if(b<min)
min=b;
if(g<min)
min=g;
printf("%lld",min);
return 0;


}
