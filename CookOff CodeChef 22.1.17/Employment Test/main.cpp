#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);

        vector<int>a(n+k);

        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

       for(int i=0;i<k;i++)
       a[n+i]=9;


       sort(a.begin(),a.end());

int median=a[(n+k+1)/2];
       printf("%d\n",median);
    }
    return 0;
}
