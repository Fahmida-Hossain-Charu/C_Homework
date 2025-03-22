#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    double d;
    int i;

    if((fp1 = fopen("values", "rb"))==NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if((fp2 = fopen("count", "rb"))==NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fread(&i, sizeof i, 1, fp2); /* Get count */

    for(; i>0; i--) {
        fread(&d, sizeof d, 1, fp1);
        printf("%f\n", d);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}