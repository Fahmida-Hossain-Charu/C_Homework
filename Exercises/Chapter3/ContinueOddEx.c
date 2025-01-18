#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i < 101; i++)
    {
        if (i % 2 == 0)
            continue;
        sum += i;
    }
    printf("Total is %d", sum);
}