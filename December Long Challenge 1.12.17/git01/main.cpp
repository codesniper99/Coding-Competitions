//DOOOOOOOOOOOOOOOONE
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

int red(string s,int m)
{  int cost=0;
  if(s[0]=='G')
   cost+=3;
   s[0]='R';
    for(int j=0;j<m-1;j++)
                {
                        if(s[j]==s[j+1])
                        {
                           if(s[j]=='R')
                             {cost+=5;s[j+1]='G';}
                           else if(s[j]=='G')
                             {cost+=3;s[j+1]='R';}
                        }
                }
                return cost;
}
int green(string s,int m)
{  int cost=0;
    if(s[0]=='R')
     {cost+=5;}
     s[0]='G';
    for(int j=0;j<m-1;j++)
                {
                        if(s[j]==s[j+1])
                        {
                           if(s[j]=='R')
                             {cost+=5;s[j+1]='G';}
                           else if(s[j]=='G')
                             {cost+=3;s[j+1]='R';}
                        }
                }
                return cost;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;int cost=0;
        scanf("%d %d",&n,&m);

        string s,s1;
int cost_R=0;
int cost_G=0;

         cin>>s1;

         cost_R+=red(s1,m);
         cost_G+=green(s1,m);
        int flagr=1;
        int flagg=1;
         for(int i=1;i<n;i++)
         { cin>>s;
             if(flagr==1)
             {cost_R+=green(s,m);flagr=0;}
         else if(flagr==0)
            {cost_R+=red(s,m);flagr=1;}
         if(flagg==1)
            {cost_G+=red(s,m);flagg=0;}
         else if(flagg==0)
            {cost_G+=green(s,m);flagg=1;}
         }
//cout<<cost_R<<' '<<cost_G<<'\n';

printf("%d\n",min(cost_R,cost_G));


    }
    return 0;
}
