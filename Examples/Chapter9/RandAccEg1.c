#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    long loc;
    int value;

    if (argc != 2) {
        printf("You must specify the file.\n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Enter byte to seek to: ");
    scanf("%ld", &loc);

    if (fseek(fp, loc, SEEK_SET)) {
        printf("Seek error.\n");
        exit(1);
    }

    value = fgetc(fp);
    printf("Value at loc %ld is %d\n", loc, value);

    fclose(fp);
    return 0;
}
