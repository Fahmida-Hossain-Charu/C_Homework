#include <stdio.h>

int main(void)
{
    if (rename("myfile.txt", "yourfile.txt") == 0) {
        printf("Rename successful.\n");
    } else {
        printf("Rename failed.\n");
    }

    return 0;
}