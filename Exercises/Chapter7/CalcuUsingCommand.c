#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        printf("You must specify the operation ");
        printf("followed by the numbers(2)");
        exit(1);
    }
    if (!strcmp("add", argv[1]))
        printf("%f", atof(argv[2]) + atof(argv[3]));
    else if (!strcmp("subtract", argv[1]))
        printf("%f", atof(argv[2]) - atof(argv[3]));
    else if (!strcmp("multiply", argv[1]))
        printf("%f", atof(argv[2]) * atof(argv[3]));
    else if (!strcmp("divide", argv[1]))
        printf("%f", atof(argv[2]) / atof(argv[3]));
    return 0;
}
