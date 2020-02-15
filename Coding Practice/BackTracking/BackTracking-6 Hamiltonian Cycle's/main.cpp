#include <iostream>
#include<stdio.h>
using namespace std;

bool is_Safe(int v,int graph[][30],int n,int position,int path[30] )
{
    if(graph[path[position-1]][v]==0)
     return false;

        for(int i=0;i<position;i++)
            {if(path[i]==v)
                return false;
            }

            return true;
}

bool recursive_function(int graph[][30],int n,int position,int path[30])
{
    if(position==n)
       {if(graph[path[position-1]][path[0]]==1)
           return true;
           else
            return false;
       }

    for(int i=1;i<n;i++)
    {
        if(is_Safe(i,graph,n,position,path))
        {
            path[position]=i;

            if(recursive_function(graph,n,position+1,path))
                return true;
            else
            { path[position]=-1;
            }

        }

    }
    return false;


}
bool solve_HC()
{
    int graph[30][30];
    int path[30];


    int n;
    printf("Enter n - \n");
    scanf("%d",&n);
    //input graph
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&graph[i][j]);
    for(int i=0;i<n;i++)
        {
        path[i]=-1;
        }

    path[0]=0;
    printf("\n\n\n");

      for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
     printf("%d ",graph[i][j]);
     printf("\n");}

    if(recursive_function(graph,n,1,path)==false)
        printf("No Solution exists!");

   else{
        printf("\n\n\nPATH IS -\n\n");
    for(int i=0;i<n;i++)
        printf("%d ",path[i]);

   printf("0 ");

   }

}


int main()
{
    solve_HC();
    return 0;
}
