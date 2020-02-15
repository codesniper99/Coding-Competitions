#include <iostream>
#include<stdio.h>
#define n 26

using namespace std;

bool is_safe(char board[n][n], int row, int col)
{   int i, j;
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i]=='Q')
            return false;

    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j]=='Q')
            return false;

    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<n; i++, j--)
        if (board[i][j]=='Q')
            return false;

    return true;
}
// Printing Board

 void print_board(char sol[n][n])
 {   printf(" N is Equal to - %d\n",n);

     for(int x=0;x<2*n+1;x++)
            printf("-");
            printf("\n");
     for(int i=0;i<n;i++)
     {   printf("|");
         for(int j=0;j<n;j++)
            printf("%c|",sol[i][j]);
         printf("\n");
         for(int x=0;x<2*n+1;x++)
            printf("-");
         printf("\n");
     }
 }
 bool recursive_function(char board[n][n],int column);

bool  solve_N_Queens()
{
    char board[n][n];
    // Initialise

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        board[i][j]=' ';
    if(recursive_function(board,0)==false)
       {printf("No Solution exists !!!"); return false;}

    else
    { printf("\n\n");
        print_board(board);
        return true;}
}

bool recursive_function(char board[n][n],int column)
{
    if(column==n)
        { return true;
        }
    int row=0;
    for(row=0;row<n;row++)
    {
        if(is_safe(board,row,column))
        {   board[row][column]='Q';
              if(recursive_function(board,column+1))
                return true;
                else
                    board[row][column]=' ';
        }
    }
    return false;

}

int main()
{
    solve_N_Queens();
    return 0;
}
