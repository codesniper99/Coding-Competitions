/* A Naive recursive implementation of MCP(Minimum Cost Path) problem */
#include<stdio.h>
#include<iostream>
#define li long int
using namespace std;
#include<bits/stdc++.h>
#include<limits.h>

 int a,b,c;
li min(li x, li y,li z,li p,li q,li r,li l);

/* Returns cost of minimum cost path from (0,0) to (m, n) in mat[R][C]*/
li minCost(li m, li n,li o,int path)
{
   if (n < 0 || m < 0|| o<0)
      return LONG_MAX;
   else if (m == 0 && n == 0 && o==0)
      return path;
   else
      return (path + min( minCost( m-1, n-1,o-1,c),
                               minCost( m-1, n,o,a),
                               minCost( m, n-1,o,a),
                                minCost(m,n,o-1,a),
                                minCost(m-1,n-1,o,b),
                                minCost(m-1,n,o-1,b),
                                minCost(m,n-1,o-1,b)));
}

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
    ios::sync_with_stdio(false);
   int t;
   cin>>t;
   while(t--)
   {
       li x,y,z;
       cin>>x>>y>>z;
       cin>>a>>b>>c;
       cout<<minCost(x,y,z,0)<<'\n';
   }return 0;
}
