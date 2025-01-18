#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char ch;
    do
    {
        ch = getch();
        _cprintf("%c", toupper(ch));
    } while (ch != 'q');
    return 0;
}