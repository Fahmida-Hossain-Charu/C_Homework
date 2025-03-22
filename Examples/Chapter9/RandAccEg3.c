#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    double d[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
    long loc;
    double value;

    if ((fp = fopen("myfile", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fwrite(d, sizeof(d), 1, fp) != 1) {
        printf("Write error.\n");
        exit(1);
    }

    fclose(fp);

    if ((fp = fopen("myfile", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Which element? ");
    scanf("%ld", &loc);

    if (fseek(fp, loc * sizeof(double), SEEK_SET)) {
        printf("Seek error.\n");
        exit(1);
    }

    fread(&value, sizeof(double), 1, fp);
    printf("Element %ld is %f\n", loc, value);

    fclose(fp);
    return 0;
}