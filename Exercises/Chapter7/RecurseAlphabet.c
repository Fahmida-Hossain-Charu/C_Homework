#include <stdio.h>
void alpha(char ch);
int main()
{
    alpha('A');
    return 0;
}
void alpha(char ch)
{
    printf("%c ", ch);
    if (ch < 'Z')
        alpha(ch + 1);
}