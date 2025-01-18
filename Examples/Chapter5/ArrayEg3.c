#include <stdio.h>
#include<conio.h>
int main()
{
    char msg[80];
    int i;
    printf("Enter message: ");
    for (i = 0; i < 80; i++)
    {
        msg[i] = getche();
        if (msg[i] == '\r')
            break;
    }
    printf("\n");
    for (i = 0; msg[i] != '\r'; i++)
        printf("%c ", msg[i + 1]);
}