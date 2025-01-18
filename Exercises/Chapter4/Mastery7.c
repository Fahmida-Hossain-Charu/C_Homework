#include <stdio.h>
int series(void);
int num = 21;
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", series());
}
int series()
{
    num = (num * 1468) % 468;
    return num;
}