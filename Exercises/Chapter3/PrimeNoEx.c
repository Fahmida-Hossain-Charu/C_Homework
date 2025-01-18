#include <stdio.h>
int main()
{
    int count=0, prime;
    for (int i = 2; i <= 1000; i++)
    {
        prime = 1;
        for (int j = 2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
            if (prime == 1)
            {
                printf("%d is prime\n", i);
                count++;
            }
        }
    
    printf("Total prime numbers:%d", count);
    return 0;
}