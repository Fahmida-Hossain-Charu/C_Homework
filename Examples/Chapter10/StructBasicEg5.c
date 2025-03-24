#include <stdio.h>

int main(void) {
    struct s_type {
        int i;
        int j;
    } s;

    int i = 10; // This 'i' is separate from the structure member 'i'

    s.i = 100; // Structure member 'i'
    s.j = 101; // Structure member 'j'

    printf("%d %d %d\n", i, s.i, s.j); // Output: 10 100 101

    return 0;
}