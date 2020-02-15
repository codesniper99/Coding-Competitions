// Opening an existing file on Desktop in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file = fopen("C:\\Users\\Akhil\\Desktop\\Example.txt", "r");
    // opened file on desktop
    char c;int words=0,spaces=0,fullstops=0,sentences=0;

    do
    {
       c=fgetc(file);
       if(c==' ')
       {
           spaces++;

       }
       else if(c=='.')
       {
           fullstops++;
       }
       printf("%c",c);
       // output sentence wise
    }
    while(c!=EOF);
    sentences=fullstops;
    words=spaces+1;
    printf("No. of words - %d\nSpaces- %d\nFullstops- %d\nSentences - %d\n",spaces,words,fullstops,sentences);
    fclose(file);

    return 0;
}
