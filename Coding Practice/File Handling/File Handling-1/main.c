// Opening an existing file on Desktop in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file = fopen("C:\\Users\\Akhil\\Desktop\\Example.txt", "r");
    // opened file on desktop
    char c;

    do
    {
       c=fgetc(file);
       printf("%c",c);
    }
    while(c!=EOF);

    fclose(file);

    return 0;
}
