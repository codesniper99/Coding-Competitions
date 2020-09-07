//M coloring problem

#include <iostream>
#include<stdio.h>
#define n 5
using namespace std;

bool is_safe(int which_color,int v,int graph[n][n],int color[n])
{

for(int i=0;i<n;i++)
  {
    if(graph[v][i]&&color[i]==which_color)
            return false;
   }

  return true;
}

void print_color(int color[n])
{
    for(int i=0;i<n;i++)
        printf("%d ",color[i]);

}
bool recursive_function(int graph[n][n],int color[n],int m,int vertice)
{  int which_color =0;
    if(vertice==n)
        return true;

    for(int i=1;i<=m;i++)
    {
        if(is_safe(i,vertice,graph,color))
        {   color[vertice]=i;
            if(recursive_function(graph,color,m,vertice+1))
                return true;
            else
                color[vertice]=0;
        }


    }

    return false;

}

bool solve_problem(int graph[n][n],int m)
{
   int color[n];

     for(int i=0;i<n;i++)
    color[i]=0;

    if(recursive_function(graph,color,m,0)==false)
        {printf("No Solution Exists!");return false;}
    else
    {
        print_color(color);
        return true;
    }


}


int main()
{  int m;
printf("Enter no. of colors");

scanf("%d",&m);
int graph[n][n];
printf("\nStart entering adjacent matrix\n");

for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
     scanf("%d",&graph[i][j]);
    }

for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
     printf("%d",graph[i][j]);
     printf("\n");
    }

    solve_problem(graph,m);

   return 0;
}
