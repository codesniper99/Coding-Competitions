#include <iostream>
#include<vector>
#include<stdio.h>

using namespace std;
int minimum(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}

int binomial(int n,int k)
{
int v[n+1][k+1];
for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
        {v[i][j]=0;printf("%d ",v[i][j]);}
        printf("\n");
        }
cout<<"\n\n\n";
    for(int i=0;i<=n;i++)
        for(int j=0;j<=minimum(i,k);j++)
    {
        if(j==0||j==i)
            v[i][j]=1;
        else
            v[i][j]=v[i-1][j-1]+v[i-1][j];
    }

     for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
        printf("%d ",v[i][j]);
        printf("\n");
        }

    return v[n][k];

}


int main()
{
     int n;
     scanf("%d",&n);


    int k;
    printf("enter k for nCk\n");
    scanf("%d",&k);

    int result=binomial(n,k);
   /* for(int i=0;i<=n;i++)
        {for(int j=0;j<n;j++)
        printf("%d ",v[i][j]);
        printf("\n");
        }
*/
    printf("\n\nResult %d C %d == %d",n,k,result);

    return 0;
}
