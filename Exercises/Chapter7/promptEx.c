#include <stdio.h>
void prompt(char *msg, char *str);
int main()
{
    char str[80];
    prompt("Enter a string: ", str);
    printf("Your string is:%s", str);
    return 0;
}
void prompt(char *msg, char *str)
{
    printf(msg);
    gets(str);
}