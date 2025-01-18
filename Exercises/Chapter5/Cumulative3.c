#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int space, comma, period;
    printf("Enter a string: ");
    gets(str);
    space = 0;
    comma = 0;
    period = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case '.':
            period++;
            break;
        case ',':
            comma++;
            break;
        case ' ':
            space++;
            break;
        }
    }
    printf("periods:%d\n", period);
    printf("comma:%d\n", comma);
    printf("space:%d\n", space);
}