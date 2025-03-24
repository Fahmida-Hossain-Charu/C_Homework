#include <stdio.h>
#include <stdlib.h>

struct s_type
{
    char name[40];
    char phone[14];
    int hours;
    double wage;
} emp[10]; // Array DECLARED AFTER struct (as you demanded)

int main(void)
{
    FILE *fp; // Original typo (missing *)
    int i;
    char temp[80];

    if ((fp = fopen("emp", "wb")) == NULL)
    {
        printf("Cannot open EMP file.\n");
        exit(i); // Original typo (undefined variable)
    }

    for (i = 0; i < 10; i++)
    {
        printf("Enter name: ");
        gets(emp[i].name);
        printf("Enter telephone number: ");
        gets(emp[i].phone);
        printf("Enter hours worked: ");
        gets(temp);
        emp[i].hours = atoi(temp);
        printf("Enter hourly wage: ");
        gets(temp);
        emp[i].wage = atof(temp);
    }

    fwrite(emp, sizeof emp, 1, fp);
    fclose(fp);

    return 0;
}