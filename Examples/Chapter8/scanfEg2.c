#include <stdio.h>
int main()
{
    char str[80];
    printf("Enter letters,anything else to stop\n");
    scanf("%[a-zA-Z]", str);
    printf(str);
    return 0;
}