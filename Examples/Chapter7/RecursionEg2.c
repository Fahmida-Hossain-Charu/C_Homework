#include <stdio.h>
void rcopy(char *s1, char *s2);
int main()
{
    char str[80];
    rcopy(str, "this is copying with recursion");
    printf(str);
    return 0;
}
void rcopy(char *s1, char *s2)
{
    if (*s2)
    { // if not at the end of s2
        *s1++ = *s2++;
        rcopy(s1, s2);
    }
    else
        *s1 = '\0';
}