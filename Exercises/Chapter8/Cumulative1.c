#include <stdio.h>
int main()
{
    char name[9][80];
    double bat_avg[9];
    int i, h, l;
    double high, low, team_avg;
    for (i = 0; i < 9; i++)
    {
        printf("Enter first name %d:", i + 1);
        scanf("%s", name[i]);
        printf("Enter batting average:");
        scanf("%lf", &bat_avg[i]);
        printf("\n");
    }
    high = 0.0;
    low = 1000.0;
    team_avg = 0.0;
    for (i = 0; i < 9; i++)
    {
        if (bat_avg[i] > high)
        {
            h = i;
            high = bat_avg[i];
        }
        if (bat_avg[i] < low)
        {
            l = i;
            low = bat_avg[i];
        }
        team_avg = team_avg + bat_avg[i];
    }
    printf("The highest is %s %lf\n", name[h], bat_avg[h]);
    printf("The lowest is %s %lf\n", name[l], bat_avg[l]);
    printf("The team average is %lf", team_avg / 9.0);
    return 0;
}