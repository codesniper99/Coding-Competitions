#include <iostream>
#include<stdio.h>
#define n 9
using namespace std;

void print(int board[n][n])
{
    printf("\n\nBoard - \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
          printf("%d ",board[i][j]);
          printf("\n");
    }
}


bool is_safe(int board[][n],int x,int y,int num)
{
     // check row
    for(int i=0;i<n;i++)
        if(board[x][i]==num)
         return false;
    //check column
    for(int i=0;i<n;i++)
        if(board[i][y]==num)
        return false;

    // check sub-square
    int s=x-x%3;
    int d=y-y%3;

   for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (board[row+s][col+d] == num)
                return false;

    return true;
}



  bool next_unassigned(int sol[][n],int &x,int&y)
{
    for(x=0;x<n;x++)
        for(y=0;y<n;y++)
        if(sol[x][y]==0)
        return true;

    return false;
}


bool recursive_function(int board[][n])
{  int row,column;
    if(next_unassigned(board,row,column)==false)
    return true;

        int num;
   for(num=1;num<=n;num++)
     {
       if(is_safe(board,row ,column,num))
       {
            board[row][column]=num;
            if(recursive_function(board))
                return true;
            else
             board[row][column]=0;
       }
     }
     return false;

}


bool solve_sudoku()
{

   /* printf("Enter Your Partially filled sudoku grid 0 for not filled\n ");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&board[i][j]);
        printf("\n");
    }*/
     int board[n][n] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};


    if(recursive_function(board)==false)
        {printf("No Solution");return false;}
    else
    {  printf("\n\n\n Solution is - \n");
        print(board);
        return true;
    }
    return true;
}


int main()
{
    solve_sudoku();
    return 0;
}
