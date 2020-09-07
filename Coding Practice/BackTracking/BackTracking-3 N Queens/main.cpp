#include <iostream>
#include<stdio.h>
using namespace std;



int check(int x,int y,int n,char a[n][n])
{
  for(int i=0;i<n;i++)
  {if(a[x][i]=='Q')
     return 1;// Checking columns
    if(a[i][y]=='Q')
        return 1;// checking rows
   }

   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
   {
       if(i+j==x+y && a[i][j]=='Q')
         return 1;
       if(i-j=x-y&& a[i][j]=='Q')
        return 1;
   }

   return 0;
}

void place(int x,int y,int n,char a[n][n])
{
   if(check(x,y,n,a)==0)
       a[x][y]='Q';
   else
    ;

}
int solve(int n,char a[n][n],int row)
{
    if(row==n)
        return 1;
    else
    { for(int i=0;i<n;i++)
      {

       if(check(row,j,n,a)==0)
        place(row,j,n,a);

        if(solve(n,a,row+1)==1)
            return 1;


        a[row][j]='-';

      }

    }
    return 0;
}





int main()
{  int  n;
   scanf("%d",&n);
    char board[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          board[i][j]='-';
          int lvl=0;
   int x= solve(n,board,lvl);
   if(x==1)
    {
        printf("Solved \n\n");
     for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        printf("%c",board[i][j]);
    printf("\n");
    }
    else
        printf("Sorry None Solution For you :/");
    return 0;
}
