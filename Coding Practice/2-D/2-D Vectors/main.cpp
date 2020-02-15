#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{   int n,m;
     cout<<"Enter n,m";
      cin>>n>>m;
    // Declaring vector of size n ,m;
    vector< vector<int> > v(n,vector<int> (m,-1));


      for(int i=0;i<n;i++)
       {for(int j=0;j<m;j++)
                printf("%d ",v[i][j]);
        cout<<'\n';}

    printf("Enter elements\n\n");

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j];

  for(int i=0;i<n;i++)
       {for(int j=0;j<m;j++)
                printf("%d ",v[i][j]);
        cout<<'\n';}

    return 0;
}
