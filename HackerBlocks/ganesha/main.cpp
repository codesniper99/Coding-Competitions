#include <iostream>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n%2==0)
        exit(0);

    int half=n/2;
    for(int i=0;i<half;i++)
    {
        cout<<"*";
        for(int j=0;j<half-1;j++)
            cout<<' ';
       if(i==0)
       {for(int x=0;x<half;x++)
            cout<<'*';}
            cout<<'*';
        cout<<'\n';
    }

    for(int y=0;y<n;y++)
        cout<<'*';
    cout<<'\n';


for(int i=0;i<half;i++)
    {  if(i==half-1)
      {
          for(int j=0;j<half;j++)
            cout<<'*';
      }
      else
         {for(int x=0;x<half;x++)
           cout<<' ';
         }
        cout<<'*';
        for(int x=0;x<half-1;x++)
           cout<<' ';

           cout<<'*';


        cout<<'\n';
    }



    return 0;
}
