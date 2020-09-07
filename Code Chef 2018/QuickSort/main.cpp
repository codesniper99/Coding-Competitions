#include <iostream>
#include<vector>
#include<stdlib.h>
#include<cstdio>
using namespace std;

long int  partition(vector<long int> &a,long int  l,long int  r)
{
    long int  i,j,x;
    long int  pivot;

    pivot=a[l];
    i=l+1;
    j=l+1;
    for(j=l+1;j<r;j++)
       {
           if(a[j] < pivot)
           {
              x=a[i];
              a[i]=a[j];
              a[j]=x;
              i++;
           }


       }
    x=a[i-1];
    a[i-1]=a[l];
    a[l]=a[i-1];

    return i-1;
}

void qsort(vector<long int> &a,long int  l,long int  r)
  {
      long int  x= partition(a,l,r);
      qsort( a,l,x-1);
      qsort(a,x+1,r);


  }






int  main()
{
    long int  n;

    scanf("%lld",&n);
    vector <long int> a(n);

    for(long int  i=0;i <n;i++)
     scanf("%d",&a[i]);


    qsort(a,0,n-1);


     for(long int k=0;k<n;k++)
     printf("%lld\n",a[k]);
    return 0;
}
