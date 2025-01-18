#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    printf("Enter a string: ");
    gets(str);
    for (int i = strlen(str); i < 80; i++)
    {
        strcat(str, ".");
    }
    printf(str);
}