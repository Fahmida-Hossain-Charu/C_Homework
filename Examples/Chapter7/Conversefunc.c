#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i;
    double d;
    long l;
    i=atoi(argv[1]);
    d=atol(argv[2]);
    l=atof(argv[3]);
    printf("%d %d %f ",i,l,d);
    return 0;
}
