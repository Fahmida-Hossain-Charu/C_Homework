#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    long i;
    int num;

    // Open the file for reading in binary mode
    if ((fp = fopen("rand", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Ask the user for the number to read
    printf("Which number (0-99)? ");
    scanf("%ld", &i);

    // Move the file pointer to the specified position
    fseek(fp, i * sizeof(int), SEEK_SET);

    // Read and print the number
    fread(&num, sizeof(num), 1, fp);
    printf("%d\n", num);

    fclose(fp);
    return 0;
}