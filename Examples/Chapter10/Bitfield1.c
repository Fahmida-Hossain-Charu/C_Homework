#include <stdio.h>

struct b_type {
    unsigned first: 1;   // First bit
    int : 6;             // Unnamed 6-bit field (padding)
    unsigned last: 1;    // Last bit
};

int main() {
    struct b_type bits;
    bits.first = 1;
    bits.last = 0;
    
    printf("First bit: %u\n", bits.first);
    printf("Last bit: %u\n", bits.last);
    return 0;
}