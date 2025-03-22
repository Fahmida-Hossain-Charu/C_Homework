#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];

    // Check if file name is specified
    if (argc != 2)
    {
        printf("File_name missing.\n");
        exit(1);
    }

    // Open the file
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Display file contents with pause
    while (fgets(str, sizeof(str), fp))
    {
        printf("%s", str);
        printf("...More?(y/n):");
        char response = toupper(getchar());
        while (getchar() != '\n')
            ;
        if (response == 'N')
        {
            break;
        }
    }
    fclose(fp);
    return 0;
}