#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    int i, num;

    // Seed the random number generator
    srand(time(NULL));

    // Open the file for writing in binary mode
    if ((fp = fopen("rand", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Write 100 random numbers to the file
    for (i = 0; i < 100; i++) {
        num = rand();
        fwrite(&num, sizeof(num), 1, fp);
    }

    fclose(fp);
    return 0;
}