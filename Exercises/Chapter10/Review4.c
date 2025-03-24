#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int count[20], i;

    /* open file */
    if ((fp = fopen("TEMP", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fread(count, sizeof(count), 1, fp);

    for (i = 0; i < 20; i++) printf("%d\n", count[i]);
    fclose(fp);
    return 0;
}