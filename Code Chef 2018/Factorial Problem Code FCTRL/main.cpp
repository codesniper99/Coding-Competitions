#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{   long long int t;
     scanf("%lld",&t);
      long long int n;
  long long int x;

   int z=0;int j=0;
   for(int i=0;i<t;i++)
   {
     z=0;
     scanf("%lld",&n);
     x=n;
     while (x)
     { z+=x/5;
        x=x/5;


      }
     cout<<z<<"\n";

   }

   return 0;
}

