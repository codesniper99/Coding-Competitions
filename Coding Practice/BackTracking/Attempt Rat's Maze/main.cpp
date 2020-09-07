#include<stdio.h>

using namespace std;
#define n 6
void print_board(int sol[n][n])
{
    for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
         printf(" %d ",sol[i][j]);
    printf("\n");}
}

bool is_safe(int x,int y,int maze[n][n])
{
    if(x>=0&&x<n&&y>=0&&n>y&&maze[x][y]==1)
       return true;
   else
      return false;
}

void initialize(int sol[n][n])
{ for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
      sol[i][j]=0;
}

bool recursive_function(int maze[n][n],int sol[n][n],int x,int y)
{
    if(x==n-1&&y==n-1)
     return true;

    int next_x,next_y;
      next_x=x+1;
      next_y=y+1;
      if(is_safe(x,next_y,maze))
      {
          sol[x][next_y]=1;
          if(recursive_function(maze,sol,x,next_y))
            return true;
      }
    if(is_safe(next_x,y,maze))
    {
        sol[next_x][y]=1;
        if(recursive_function(maze,sol,next_x,y))
            return true;
    }
     if(is_safe(next_x,next_y,maze))
    {
        sol[next_x][next_y]=1;
           if(recursive_function(maze,sol,next_x,next_y))
            return true;
    }

    sol[x][y]=0;
        return false;


}


bool solve_maze(int maze[n][n])
{
    int sol[n][n];
    initialize(sol);
    sol[0][0]=1;

    if(recursive_function(maze,sol,0,0)==false)
        printf("No solution");
    else
     print_board(sol);
    return true;

}
int main()
{

    int maze[n][n]  =  { {1, 0, 0, 0,0,0},
        {1, 1, 1,0,0, 1},
        {1, 0,1,0, 0, 0},
        {1, 1, 1,1,1, 1},
        {1,0,1,0,1,0 },
        {1,1,1,0,1,1}

                         };
print_board(maze);
printf("---------------\n\n\n");

    solve_maze(maze);
    return 0;
}
