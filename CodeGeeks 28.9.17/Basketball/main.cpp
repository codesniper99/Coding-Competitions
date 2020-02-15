#include <iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        vector<int>a(n);
        for(long int i=0;i<n;i++)
            scanf("%d",&a[i]);
            char e[1000001];
            scanf("%s",e);
            long int z=0;
            while(e[z]!= '\0')
            z++;


            long int r;
            scanf("%ld",&r);
        long int counter=0;long int i=0;
        for(i=0;i<z;i++)
        {
            if(e[i]=='1')
                counter++;
            if(counter==3)
                break;
        }
       i++;

         long int x=i%n;
         // x=9
        long int y =x+r-1;
        y=y%n;



         long int result=0;
         result=a[y];
         printf("%ld ",result);


    }
    return 0;
}
