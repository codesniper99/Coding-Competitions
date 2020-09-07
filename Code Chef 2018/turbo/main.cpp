#include<cstdio>>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long int t=0;
    scanf("%ld",&t);

    vector<long int> a(t);

     vector<long int>b(t);
     vector<long int>c(t);
     for(long int i=0;i<t;i++)
     {
         b[i]=0;
         c[i]=0;
     }
     for(long int e=0;e<t;e++)
     {
         scanf("%ld",&a[e]);
     }
       for(long int j=0;j<t;j++)
        {
            b[a[j]]++;
        }

     for(long int z=0;z<t;z++)
     {
         for(long int q=0;q<b[z];q++)
            printf("%ld\n",z);
     }


     return 0;
}
