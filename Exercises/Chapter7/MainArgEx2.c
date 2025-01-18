#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int i;
    if (argc != 3)
    {
        printf("You must specify two numbers.");
        exit(1);
    }
    printf("%f",atof(argv[1])+atof(argv[2]));
}