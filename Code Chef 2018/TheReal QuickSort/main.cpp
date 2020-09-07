#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int partition ( int A[],int start ,int end) {
    int i = start + 1;int x;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <= end ; j++ )  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if ( A[ j ] < piv) {
                 x=A[i];
                 A[i]=A[j];
                 A[j]=x;
            i += 1;
        }
   }
   x=A[start];
   A[start]=A[i-1];
   A[i-1]=x;//put the pivot element in its proper place.
   return i-1;                      //return the position of the pivot
}

void quick_sort ( int A[ ] ,int start , int end ) {
   if( start < end ) {
        //stores the position of pivot element
         int piv_pos = partition (A,start , end ) ;
         quick_sort (A,start , piv_pos -1);    //sorts the left side of pivot.
         quick_sort ( A,piv_pos +1 , end) ; //sorts the right side of pivot.
   }
}




int main()
{   int n;

    scanf("%d",&n);
    int a[30];

    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);

     system("cls");

    for(int i=0;i<n;i++)
     printf("%d\n",a[i]);
      system("cls");

    quick_sort(a,0,n-1);

system("cls");
     for(int i=0;i<n;i++)
     printf("%d\n",a[i]);
    return 0;

    return 0;
}
