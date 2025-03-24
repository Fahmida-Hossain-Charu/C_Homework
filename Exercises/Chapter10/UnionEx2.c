#include <stdio.h>

int main(void)
{
    union t_type {
        long l;
        int i;
    } uvar;

    uvar.l = 0L; /* clear l */
    uvar.l = 100;
    printf("%ld", uvar.l);
    return 0;
}