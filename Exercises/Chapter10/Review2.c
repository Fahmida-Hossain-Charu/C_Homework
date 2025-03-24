#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    /* open file */
    if ((fp = fopen("myfile", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fprintf(fp, "%s %.2f %X %c", "this is a string", 1230.23, 0x1FFF, 'X');
    fclose(fp);

    return 0;
}