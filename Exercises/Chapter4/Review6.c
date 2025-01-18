#include <stdio.h>
int main()
{
    int i;
    float feet, meter, ounce, pound;
    do
    {
        printf("Convert\n\n");
        printf(" 1.feet to meters\n");
        printf(" 2.meters to feet\n");
        printf(" 3.ounces to pound\n");
        printf(" 4.pounds to ounces\n");
        printf(" 5.Quit\n");
        do
        {
            printf("Enter choice: ");
            scanf("%d", &i);
        } while (i<1 || i >5);
        switch (i)
        {
        case 1:
            printf("Enter feet: ");
            scanf("%f", &feet);
            printf("Meters:%f\n", feet / 3.28);
            break;
        case 2:
            printf("Enter meters: ");
            scanf("%f", &meter);
            printf("Feet:%f\n", meter * 3.28);
            break;
        case 3:
            printf("Enter ounces: ");
            scanf("%f", &ounce);
            printf("Pounds:%f\n", ounce / 16);
            break;
        case 4:
            printf("Enter pounds: ");
            scanf("%f", &pound);
            printf("Ounces:%f\n", pound * 16);
            break;
        }

    } while (i != 5);
}
