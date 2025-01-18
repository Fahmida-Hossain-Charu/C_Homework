#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *p;
    if (argc != 2)
    {
        printf("You must specify a string");
        exit(1);
    }
    p = argv[1];
    while (*p)
    {
        printf("%c", (*p) + 1);
        p++;
    }
    return 0;
}
