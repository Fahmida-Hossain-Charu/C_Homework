#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char fname[80];

    printf("Enter name of file to erase: ");
    gets(fname); // Note: `gets()` is unsafe; consider using `fgets()` instead.
    printf("Are you sure? (Y/N) ");
    if (toupper(getchar()) == 'Y') {
        if (remove(fname) == 0) {
            printf("File erased successfully.\n");
        } else {
            printf("File not found or write protected.\n");
        }
    }

    return 0;
}