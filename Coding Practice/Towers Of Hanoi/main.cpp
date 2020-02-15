#include <iostream>
#include<stdio.h>
#include<vector>


using namespace std;

void move_from_start_to_target(  int n,char from, char to,char aux)
{  if(n<1)
    return ;
    if(n==1)
    {
        printf("Disk 1 moved from rod %c to rod %c \n",from,to);
    return ;
    }


       move_from_start_to_target(n-1,from,aux,to);
     printf("Disk %d moved from rod %c to rod %c \n",n,from,to);
    move_from_start_to_target(n-1,aux,to,from);

}


bool solve_TOH()
{   int n;
    printf("Enter n");
    scanf("%d",&n);

move_from_start_to_target(n,'A','C','B');

}


int main()
{   solve_TOH();
    return 0;
}
