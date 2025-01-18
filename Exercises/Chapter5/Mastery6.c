#include <stdio.h>
int main()
{
    int cube;
    int arr[10][3] = {
        1, 1, 1,
        2, 4, 8,
        3, 9, 27,
        4, 16, 64,
        5, 25, 125,
        6, 36, 216,
        7, 49, 343,
        8, 64, 512,
        9, 81, 729,
        10, 100, 1000};
    printf("Enter cube:");
    scanf("%d", &cube);
    for (int i = 0; i < 10; i++)
    {
        if (cube == arr[i][2])
        {
            printf("Root is:%d\n", arr[i][0]);
            printf("Square is:%d", arr[i][1]);
            break;
        }
    }
}