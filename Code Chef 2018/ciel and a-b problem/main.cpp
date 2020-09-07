#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
   int a,b;
   scanf("%d %d",&a,&b);

    int n;
    n=a-b;

    int i=0;
    if((n%10)==9)
        n--;
    else if(n%10==0)
        n++;
    else
        n++;
    printf("%d",n);
    return 0;
}
