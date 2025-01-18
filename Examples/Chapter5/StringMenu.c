#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char command[80], temp[80];
    int i, j;
    for (;;)
    {
        printf("Opertaion? ");
        gets(command);
        if (!strcmp(command, "quit"))
            break;
        printf("Enter 1st number: ");
        gets(temp);
        i = atoi(temp);
        printf("Enter 2nd number: ");
        gets(temp);
        j = atoi(temp); // actually stored in i & j temp does not matter
        if (!strcmp(command, "add"))
            printf("%d\n", i + j);
        else if (!strcmp(command, "subtract"))
            printf("%d\n", i - j);
        else if (!strcmp(command, "multiply"))
            printf("%d\n", i * j);
        else if (!strcmp(command, "division"))
        {
            if (j != 0)
                printf("%d\n", i / j);
        }
        else
            printf("Unknown command\n");
    }
}