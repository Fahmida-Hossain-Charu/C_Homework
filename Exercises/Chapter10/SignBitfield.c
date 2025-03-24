#include <stdio.h>

int main(void) {
    struct b_type {
        int a: 3;   // 3-bit signed (-4 to 3)
        int b: 3;   // 3-bit signed
        int c: 2;   // 2-bit signed (-2 to 1)
    } bvar;

    bvar.a = -1;    // Stored as 3-bit two's complement (111)
    bvar.b = 3;     // Maximum positive for 3 bits (011)
    bvar.c = 1;     // (01)
    
    printf("%d %d %d", bvar.a, bvar.b, bvar.c);
    // Output: -1 3 1
    
    return 0;
}