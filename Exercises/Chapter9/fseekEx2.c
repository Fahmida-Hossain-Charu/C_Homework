#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned char ch, val;

    if (argc != 3)
    {
        printf("Usage: find <filename> <value>\n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    val = atoi(argv[2]);
    printf("Searching for value %d in file %s\n", val, argv[1]);
    while ((ch = fgetc(fp)) != EOF)
    {

        if (ch == val){
            printf("Found value at %ld\n", ftell(fp));
        }
    }

    fclose(fp);
    printf("Search complete!");
    return 0;
}