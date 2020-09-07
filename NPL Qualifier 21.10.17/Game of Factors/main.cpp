#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        vector<long long int >a(n);

        for(long long int i=0;i<n;i++)
        scanf("%lld",&a[i]);

long long int counter=0;
        int flag=1;
     for(long long int z=0;z<n;z++)
        {
            while(a[z]%2==0)
            {
                 counter++;
                 a[z]=a[z]/2;
            }

             for (long long int i = 3; i <= sqrt(a[z]); i = i+2)
    {

        while (a[z]%i == 0)
        {
           counter++;
            a[z]= a[z]/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (a[z]> 2)
        counter++;

        }
  for(long long int x=0;x<counter-1;x++)
    flag=-flag;


        if(flag==1)
            printf("Appu");
        else if
            (flag==-1)
            printf("Friend");
        else
            ;
    }
    return 0;
}
