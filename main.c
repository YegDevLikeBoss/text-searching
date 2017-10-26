#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len 1024

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    char sInput[len];

    if(argc!=3)
    {
        printf("\nFew arguments. Minimum two of them needed.\n");
        exit(1);
    }

    if((fp=fopen(argv[1], "r"))==NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }

    if (strlen(argv[2])>=len)
        printf("Too long search string. Maximum 1023 symbols");
    else
        strcpy(sInput, argv[2]);

    printf("%s", sInput);

    if (strstr(*fp, argv[2])==NULL)
        printf("Couldn't found match.");
    else
        printf("Found match.")

    fclose(fp);

    return 0;
}

