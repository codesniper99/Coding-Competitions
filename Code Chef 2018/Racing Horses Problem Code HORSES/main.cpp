#include <iostream>
#include<vector>
#include<stdio.h>


using namespace std;

int main()
{
    int t;
    int n;
    int i;
    scanf("%d %d",&t,&n);
    vector<long long int> a(n);
   while(t--)
        {
    for(i=0;i<n;i++)
            scanf("%lld",&a[i]);

    long long int diff;
    diff=1000000001;

    for(i=0;i<n;i++)
        for(int j=i+1;j<n-1;j++)
    {
        long long int x=a[i]-a[j];
       if(x<0)
        x=-x;
        if(x<diff)
            diff=x;
    }
    printf("%lld",diff);
    }
    return 0;
}
