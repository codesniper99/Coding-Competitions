#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
/*
int check(int cake[][100],m,n,i,j)
{  int flag=0;
    if(i==0)
    {

    }
}
*/


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;int cost=0;
        scanf("%d %d",&n,&m);

        string s;
        char r='R';
        char g='G';
          cin>>s;
          char x=s[0];
            for(int j=0;j<m;j++)
                {
                        if(s[j]==s[j+1])
                        {
                           if(s[j]=='R')
                             {cost+=5;}
                           else
                             {cost+=3;}
                        }
                }


         for(int i=1;i<n;i++)
         {
             cin>>s;
             if(s[0]==x)
             {
                 if(x==r)
                    {s[0]=g;x=g;}
                 else if(x==g)
                    {
                        s[0]=r;x=r;
                    }
             }

                for(int j=0;j<m;j++)
                {
                        if(s[j]==s[j+1])
                        {
                           if(s[j]=='R')
                             {cost+=5;}
                           else
                             {cost+=3;}
                        }
                }
         }
    printf("%d\n",cost);


    }
    return 0;
}
