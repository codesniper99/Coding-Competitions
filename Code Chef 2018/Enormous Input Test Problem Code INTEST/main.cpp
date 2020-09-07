#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n,k;
  scanf("%d%d",&n,&k);
  int count=0;
  long long int a;
  while(n>0)
  {scanf("%lld",&a);
    n--;
    if(a%k==0)
     count++;
   }
   printf("%d",count);
   return 0;
}
