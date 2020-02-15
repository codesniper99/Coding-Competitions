/* A Naive recursive implementation of MCP(Minimum Cost Path) problem */
#include<stdio.h>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<limits.h>

 int a,b,c;
int min(int x, int y, int z);

int minCost(int m, int n)
{
     int i, j;

     // Instead of following line, we can use int tc[m+1][n+1] or
     // dynamically allocate memoery to save space. The following line is
     // used to keep te program simple and make it working on all compilers.
     int tc[m+1][n+1];

     tc[0][0] = 0;

     /* Initialize first column of total cost(tc) array */
     for (i = 1; i <= m; i++)
        tc[i][0] = tc[i-1][0] + c;

     /* Initialize first row of tc array */
     for (j = 1; j <= n; j++)
        tc[0][j] = tc[0][j-1]+b;

     /* Construct rest of the tc array */
     for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            tc[i][j] = min(tc[i-1][j-1]+a,tc[i-1][j]+c,tc[i][j-1]+b);

     return tc[m][n];
}
/* Returns cost of minimum cost path from (0,0) to (m, n) in mat[R][C]*/
/*int minCost(int m, int n,int path)
{
   if (n < 0 || m < 0)
      return INT_MAX;
   else if (m == 0 && n == 0)
      return path;
   else
      return (path + min( minCost( m-1, n-1,a),
                               minCost( m-1, n,b),
                               minCost( m, n-1,c) ));
}
*/
/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
   int mini=x;
   if(y<x)
    mini=y;
   if(z<mini)
    mini=z;
    return mini;
}

/* Driver program to test above functions */
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int x,y;
       cin>>x>>y;
       cin>>a>>b>>c;
       printf("%d ", minCost( x,y));
   }return 0;
}
