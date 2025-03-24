#include <stdio.h>
#include <string.h>

struct s_type {
    int i;
    char str[80];
} s, *p;

int main(void) {
    p = &s; // Point p to the structure s

    s.i = 10; // Access structure member using the dot operator
    p->i = 10; // Access structure member using the arrow operator (same as above)

    strcpy(p->str, "I like structures."); // Copy a string into the structure member

    printf("%d %d %s\n", s.i, p->i, p->str); // Output: 10 10 I like structures.

    return 0;
}