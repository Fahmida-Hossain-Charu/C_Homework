#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch;

    // Check command line arguments
    if (argc != 3) {
        printf("Usage: copy <source> <destination>\n");
        exit(1);
    }

    // Open source file
    if ((from = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // Open destination file
    if ((to = fopen(argv[2], "w")) == NULL) {
        printf("Cannot open destination file.\n");
        exit(1);
    }

    // Copy and convert to uppercase
    while (!feof(from)) {
        ch = fgetc(from);
        if (!feof(from)) fputc(toupper(ch), to);
    }

    fclose(from);
    fclose(to);

    return 0;
}
