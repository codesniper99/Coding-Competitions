#include <iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int a[27];
        for(int i=0;i<26;i++)
            a[i]=i+97;
    while(t--)
    {

        int q;int n;char s[150];

        char ch;
        scanf("%d",&q);
        if(q==1)
        { char x;

            scanf("%d %c",&n,&ch);
            x=a[n-1];
            a[n-1]=ch;
            int t=ch;
            a[t-97]=x;
        }
        else if(q==2)
        {scanf("%s",s);
          int t[150];

          for(int i=0;i<strlen(s);i++)
            {

             t[i]=s[i];
             t[i]=t[i]-97;}

            for(int i=0;i<strlen(s);i++)
            {char le;int x;
              x=a[t[i]];
              le=x;
               printf("%c",le);
            }
            printf("\n");

            }
    }
    return 0;
}
