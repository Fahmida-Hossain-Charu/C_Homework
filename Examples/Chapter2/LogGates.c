#include <stdio.h>
int xor (int a, int b);
int main()
{
    int x, y;
    printf("Enter x(0 or 1): ");
    scanf("%d", &x);
    printf("Enter y(0 or 1): ");
    scanf("%d", &y);
    printf("X AND Y :%d\n", x && y);
    printf("X OR Y :%d\n", x || y);
    printf("X XOR Y :%d\n", xor(x, y));
}
int xor (int a, int b) {
    return (a || b) && !(a && b);
}