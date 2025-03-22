#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    // Check if file name is specified
    if (argc != 2) {
        printf("File-name missing.\n");
        exit(1);
    }

    // Open the file
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Show the file contents once
    int ch;
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
}