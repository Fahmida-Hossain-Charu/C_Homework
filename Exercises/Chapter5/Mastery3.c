#include <stdio.h>
int main()
{
    int stat[20];
    int mode, count, oldcount, oldmode;
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the no: ");
        scanf("%d", &stat[i]);

        for (int i = 0; i < 20; i++)
        {
            mode = stat[i];
            count = 1;
            for (int j = i + 1; j < 20; j++)
            {
                if (mode == stat[j])
                    count++;
                if (count > oldcount)
                {
                    oldcount = count;
                    oldmode=mode;
                }
            }
        }
    }
    printf("The mode is :%d\n", oldmode);
}