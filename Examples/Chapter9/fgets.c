#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];
    int i;

    printf("Enter a string: ");
    fgets(str, 10, stdin);

    // Remove newline, if present
    i = strlen(str) - 1;
    if (str[i] == '\n') str[i] = '\0';

    printf("This is your string: %s\n", str);
    return 0;
}