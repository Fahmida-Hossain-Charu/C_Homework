#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch;
    int tab, count;

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

    // Copy the file and replace tabs with spaces
    count = 0;
    while (!feof(from)) {
        ch = fgetc(from);
        if (ch == '\t') {
            for (tab = count; tab < 8; tab++) {
                fputc(' ', to);
            }
            count = 0;
        } else {
            if (!feof(from)) fputc(ch, to);
            count++;
            if (count == 8 || ch == '\n') count = 0;
        }
    }

    fclose(from);
    fclose(to);

    return 0;
}