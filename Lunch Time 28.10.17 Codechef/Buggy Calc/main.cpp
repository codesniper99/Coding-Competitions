#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        long long int a,b;
        scanf("%lld %lld",&a,&b);
        int arra[10]={0,0,0,0,0,0,0,0,0};
        int i=0;
        while(a)
        {
            arra[i]=a%10;
            a=a/10;
            i++;
        }

       i=0;
        while(b)
        {
            long long int digit =0;
            digit=arra[i]+b%10;
            if(digit>=10)
                digit=digit%10;
           arra[i]= digit;
           i++;
           b=b/10;


        }

      long long int result=0;
        for(i=0;i<10;i++)
        {
            result+=pow(10,i)*arra[i];
            }
        printf("%d\n",result);


    }
    return 0;
}
