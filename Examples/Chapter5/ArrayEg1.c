#include <stdio.h>
int main()
{
    int temp[31], i, min, max, avg;
    int days;
    printf("How many days in month? ");
    scanf("%d", &days);
    for (i = 0; i < days; i++)
    {
        printf("Enter noonday temperature for %d:", i + 1);
        scanf("%d", &temp[i]);
    }
    avg = 0;
    for (i = 0; i < 10; i++)
        avg = avg + temp[i];
    printf("Average temp is %d\n ", avg / days);
    min = 200;
    max = 0;
    for (i = 0; i < 10; i++)
    {
        if (min > temp[i])
            min = temp[i];
        if (max < temp[i])
            max = temp[i];
    }
    printf("Minimum is %d\n", min);
    printf("Maximum is %d\n", max);
}