#include <stdio.h>
int main()
{
    int answer, chances, right, wrong, count, again;
    for (count = 1; count < 11; count++)
    {
        printf("What is %d +%d? ", count, count);
        scanf("%d", &answer);
        if (answer == count + count)
            printf("Right! ");
        else
        {
            printf("Sorry you're wrong");
            printf("Try again\n");
            right = 0;
            for (chances = 0; chances < 3 && !right; chances++)
            {
                printf("What is %d +%d? ", count, count);
                scanf("%d", &answer);
                if (answer == count + count)
                    printf("Right! ");
                right = 1;
            }
        }
        if (!right)
            printf("Wrong,The answer is %d\n", count + count);
    }
}
