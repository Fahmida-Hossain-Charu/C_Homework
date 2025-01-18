#include <stdio.h>
int main()
{
    int bball[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Quarter %d,player %d ", i + 1, j + 1);
            printf("Enter no of points: ");
            scanf("%d", &bball[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Quarter %d,player %d: ", i + 1, j + 1);
          
            printf("%d\n", bball[i][j]);
        }
    }
}