#include <iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    int t;
scanf("%d",&t);
for(int w=0;w<t;w++)
    {int m,n,x;
    scanf("%d %d",&m,&n);
    vector<int> a(m);
    for(int i=1;i<=m;i++)
        a[i-1]=i;

    for(int j=0;j<n;j++)
    {
        scanf("%d",&x);
        a[x-1]=0;
    }
    int z;
    z=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]!=0&&(z%2==0))
        {
            printf("%d ",a[i]);
            a[i]=0;
            z++;
        }
        if(a[i]!=0)
            z++;
    }
    printf("\n");
     for(int i=0;i<m;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
            a[i]=0;

        }
    }
    }
    return 0;
}
