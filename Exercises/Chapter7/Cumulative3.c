#include <stdio.h>
void avg(double *d, int num);
int main()
{
    double no[] = {1.5, 1.0, 1.1, 2.3, 3.5, 4.5, 6.78, 6.75, 3.45, 10.23};
    avg(no, 10); // passing the array no[0] is assigned to d ptr
    return 0;
}
void avg(double *d, int num)
{
    double sum = 0;
    int temp;
    temp = num - 1;
    for (; temp >= 0; temp--)
    {
        sum += d[temp];
    }
    printf("Average is %f\n", sum / (double)num);
}