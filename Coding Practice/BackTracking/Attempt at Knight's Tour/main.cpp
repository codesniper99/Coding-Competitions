#include <iostream>
#include<stdio.h>

using namespace std;
int recursive_function(int sol[8][8],int move_counter,int x,int y,int move_x[],int move_y[] );

void print_board(int sol[8][8])
{
  for(int i=0;i<8;i++)
        { for(int j=0;j<8;j++)
           printf("  %d  ",sol[i][j]);
            printf("\n");
        }
}

void initialize(int sol[8][8])
{
     for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
          sol[i][j]=-1;
}

bool is_safe(int x,int y,int sol[8][8])
{
    if(x>=0&& x<8 &&y>=0&&y<8 && sol[x][y]==-1)
        return true;

        return false;


}

int recursive_function(int sol[8][8],int move_counter,int x,int y,int move_x[8],int move_y[8] )
{
    int next_x,next_y;
     if(move_counter==64)
        return true;


    for(int k=0;k<8;k++)
    {
        next_x= x+ move_x[k];
        next_y=y+ move_y[k];
        if(is_safe(next_x,next_y,sol))
           {
               sol[next_x][next_y]=move_counter;

               if(recursive_function(sol,move_counter+1,next_x,next_y,move_x,move_y)==true)
                   return true;
               else
                sol[next_x][next_y]=-1;

           }

    }
    return false;


}

bool solveKT()
{
    int sol[8][8];
 int move_x[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int move_y[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };


    initialize(sol);

   sol[0][0]=0;

   if( recursive_function(sol,1,0,0,move_x,move_y)==false)
     printf("No solution");
   else
    print_board(sol);

}

int main()
{
    solveKT();
    return 0;
}
