#include <stdio.h>
int main()
{
    char ch, next;
    printf("Enter characters or q to quit: \n");
    while (1)
    {
        ch = getchar();
        if (ch == '\\')
        {
            next = getchar();
            switch (next)
            {
            case 't':
                printf("Tab \n");
                break;
            case 'b':
                printf("Backspace\n");
                break;
            case 'n':
                printf("Newline\n");
                break;
            case 'r':
                printf("Enter\n");
                break;
            default:
                printf("Unknown escape sequence\\ %c\n", next);
            }
        }
        else if (ch == '\n')
            continue;
        else
        {
            printf("Regular character:%c\n", ch);
        }
    }

    return 0;
}