#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
   long long int t;
   scanf("%lld",&t);
   while(t--)
    {

       long long int n,k;
       scanf("%lld %lld", &n,&k);
       long long int a=0;
       long long int d;
       d=1;int flag=0;long long int re;
       while(flag!=1)
       {  long long int sum=0;
          d=1;
         while(sum<k)
            {
   if(n!=1)
          {sum=a+(n-1)*d;
           if(sum==k)
           {flag=1; re=a;break;}
           a++;
           }
           else
           {re=k;flag=1;break;}
           }
         d+=2;
       }

       printf("%lld \n",re);


   }
    return 0;
}
