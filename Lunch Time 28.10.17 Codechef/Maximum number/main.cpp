#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   long long int a;
      scanf("%lld",&a);
      if(a%6==0)
      {
          printf("%d\n",a);
          return 0;
      }
      long long int x=a;
      int len=0;
      while(x)
      {
            len++;
            x=x/10;
      }
        vector<int>digi(len);
        x=a;
        int i=0;
        while(x)
        {
            digi[i]=x%10;
            x=x/10;
            i++;
        }int r;

        long long int temp=0,maxi=-999999;
        for( i=0;i<len;i++)
        {int x=0;
            for(int j=0;j<len;j++)
            {
                 if(j!=i)
                     {  temp+=pow(10,x)*digi[j];x++;
                      }
             }

        if(temp>maxi&&temp%6==0)
                {maxi=temp;r=j;}

        temp=0;

        }

            if(maxi!=a)
            {
                while(maxi%10==0)
                    maxi=maxi/10;
            }


if(maxi!=-999999)
        printf("%d\n",maxi);
else
    printf("-1 \n");
    }
    return 0;
}
