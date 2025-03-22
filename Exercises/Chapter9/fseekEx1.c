#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    long l;

    if (argc != 2) {
        printf("You must specify the file.\n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    l = ftell(fp);

    fseek(fp, 0, SEEK_SET);
    for (; l >= 0; l -= 2) {
        ch = fgetc(fp);
        putchar(ch);
        fseek(fp, 1L, SEEK_CUR);
    }

    fclose(fp);
    return 0;
}