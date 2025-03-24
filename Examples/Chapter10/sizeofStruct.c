#include <stdio.h>

struct s_type {
    int i;
    char ch;
    int *p;
    double d;
};

int main(void)
{
    printf("s_type is %lu bytes long\n", sizeof(struct s_type));
    return 0;
}
