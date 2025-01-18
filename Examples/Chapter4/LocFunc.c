#include <stdio.h>
int power(int m,int e);

int main()
{
    int m,e;
    m = 2;

    e = 3;
    printf("%d raised to the power of %d is %d\n", m, e, power(m,e));
    printf("4 to the 5th is: %d\n",power(4,5));
    return 0;
}
int power(int m,int e)
{
    int temp, temp2;
    temp = 1;
    temp2 = e;
    for (; temp2 > 0; temp2--)
        temp = temp * m;
    return temp;
}