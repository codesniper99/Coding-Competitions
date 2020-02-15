// s= x + x^2/2 + x^3/ 3....x^n/ n..
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{float x ;int n=0;int j;
printf("Enter X and N\n");
scanf("%d%f",&n,&x);


float total= 0.0;
for(j= 1 ; j<=n;j++)
{total+=pow (x,j)/j;
}
printf("Total is %f",total);

}
