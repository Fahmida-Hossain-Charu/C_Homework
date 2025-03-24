#include <stdio.h>
#include <stdlib.h>

struct s_type {
    char name[40];
    char phone[14];
    int hours;
    double wage;
};  // Struct properly closed

struct s_type emp[10];  // Array DECLARED AFTER struct

int main(void)
{
    FILE *fp;  // Original typo (should be FILE*)
    int i;

    if((fp = fopen("emp", "rb"))==NULL) {
        printf("Cannot open EMP file.\n");
        exit(1);
    }

    fread(emp, sizeof emp, 1, fp);
    for(i=0; i<10; i++) {
        printf("%s %s\n", emp[i].name, emp[i].phone);
        printf("%d %f\n\n", emp[i].hours, emp[i].wage);
    }

    fclose(fp);
    return 0;
}