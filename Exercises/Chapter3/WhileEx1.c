#include <stdio.h>
int main()
{

    float dist, speed;
    int n;
    printf("Enter drive time no: ");
    scanf("%d", &n);
    while (n)
    {
        printf("\nEnter distance:");
        scanf("%f", &dist);
        printf("Enter speed: ");
        scanf("%f", &speed);
        printf("Driving time is: %f\n", dist / speed);
        n--;
    }
    return 0;
}