#include <stdio.h>
int main()
{
    float f;
    for (f = 1.0; (int)f < 10; f = f + 0.1)
        printf("%f ", f);
}