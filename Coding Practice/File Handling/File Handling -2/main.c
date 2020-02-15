#include <stdio.h>
#include <stdlib.h>

typedef struct{
   char* name;
   int score;
} Entry;
int main()
{
    FILE * file = fopen("C:\\Users\\Akhil\\Desktop\\Example.txt", "r");
    // opened file on desktop
    int entryCount;
    fscanf(file,"%i",&entryCount);

    Entry* entries = malloc(sizeof(Entry)* entryCount);
    // Calling Malloc function
    for(int i=0;i<entryCount;i++)
    {
      int nameLen;
      fscanf(file,"%i",&nameLen);
      entries[i].name= malloc(sizeof(char)*(nameLen+1));
    }


    fclose(file);
    free(entries);
    return 0;
}
