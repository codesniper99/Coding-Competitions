#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {int flag=0;
        long int n,m;
        scanf("%ld %ld",&n,&m);
        vector<long int>a(n);
        for(long int i=0;i<n;i++)
            scanf("%ld",&a[i]);
long int sum=0;
        for(long int i=0;i<n;i++)
        {

        for(long int j=i+1;j<n;j++)
        {
        sum= (a[i]+a[j]);
           if(sum==m)
            {flag=1;

           }

        }
        }
        if(flag==1)
        printf("\nyes");
        else
            printf("\nno");

    }
    return 0;
}
