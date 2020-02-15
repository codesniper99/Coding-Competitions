// Simple Hash Map question at URL --
//https://www.codechef.com/COOK09/problems/MIME2

#include <iostream>
#include<stdio.h>
#include<map>
#include<string.h>
using namespace std;

int main()
{   int n,q;
    scanf("%d %d",&n,&q);
    map <string , string > media;
    char str1[1000];
    char str2[1000];
    for(int i=0;i<n;i++)
    {
        cin>>str1;
        cin>>str2;
        media[str1]=str2;

    }
    char s[1000];
    for(int i=0;i<q;i++)
    {  char check[100];int counter=0;

        scanf("%s",s);int j;
        int len = strlen(s);
        for(j=len-1;j>=0&&s[j]!='.';j--)
        {
            check[counter]=s[j];
            counter++;

        }
        if(j==-1)
        {
            printf("Unknown");
            continue;
        }
        check[counter]='\0';
        char ans[1000];
        int y=0;
        int lengthe=strlen(check);
        for(int x=lengthe-1;x>=0;x--)
            {
                ans[y]=check[x];
                y++;
            }
         ans[y]='\0';
         // fUNCTIONS USED
        if((media.find(ans))!=media.end())
        {
            cout<<"\nFound -- \n"<<media[ans]<<'\n';
            printf("Done\n\n");
            continue;
        }
        else
        {
            printf("Not found Unknown\n");
            continue;
        }



    }


  printf("\nAll Queries finished\n");
    return 0;
}
