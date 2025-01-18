#include <stdio.h>
int main()
{
    int i;
    //for loop
    for (i = 1; i <= 10; i++)
        printf("%d ", i);
        //do while
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    //while loop
    i=1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}