#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int count[20], i;

    /* open file */
    if ((fp = fopen("TEMP", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    for (i = 0; i < 20; i++) count[i] = i + 1;

    fwrite(count, sizeof(count), 1, fp);
    fclose(fp);

    return 0;
}