/* A Naive recursive implementation of MCP(Minimum Cost Path) problem */
#include<stdio.h>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<limits.h>
#define li long int
 int a,b,c;
li min(li x, li y,li z,li p,li q,li r,li l);
li minCost(li m, li n,li o)
{
     li i, j,k;

     // Instead of following line, we can use li tc[m+1][n+1] or
     // dynamically allocate memory to save space. The following line is
     // used to keep te program simple and make it working on all compilers.
     li tc[m+1][n+1][o+1];

     tc[0][0][0] = 0;


     /* Initialize first column of total cost(tc) array */
     for (i = 1; i <= m; i++)
        {tc[i][0][0] = tc[i-1][0][0] + a;
         tc[i][1][0]= tc[i-1][1][0]+b;
        }
        for(j=1;j<=n;j++)
            tc[0][j][0] = tc[0][j-1][0] + a;
        for(k=1;k<=o;k++)
        tc[0][0][k] = tc[0][0][k-1] + a;

     /* Initialize first row of tc array */
     /* Construct rest of the tc array */
     for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            for(k=1;k<=o;k++)
            tc[i][j][k] = min(tc[i-1][j-1][k-1]+c,tc[i-1][j][k]+a,tc[i][j-1][k]+a,tc[i][j][k-1]+a,tc[i-1][j-1][k]+b,tc[i-1][j][k-1]+b,tc[i][j-1][k-1]+b);

     return tc[m][n][o]
     ;
}
/* Returns cost of minimum cost path from (0,0) to (m, n) in mat[R][C]*/
/*li minCost(li m, li n,li path)
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
li min(li x, li y,li z,li p,li q,li r,li l)
{
   li mini=x;
   if(y<mini)
    mini=y;
   if(z<mini)
    mini=z;
   if(p<mini)
    mini=p;
    if(q<mini)
    mini=q;
    if(r<mini)
    mini=r;
    if(l<mini)
    mini=l;
   return mini;
}
/* Driver program to test above functions */
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
     li x,y,z;
       cin>>x>>y>>z;
       cin>>a>>b>>c;
       printf("%ld ", minCost( x,y,z));
   }return 0;
}
