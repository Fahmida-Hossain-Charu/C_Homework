#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("There are %d arguements\n",argc);
    printf("The last one is %s ",argv[argc-1]);
    return 0;
}
