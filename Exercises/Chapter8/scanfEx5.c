#include<stdio.h>
int main(){
    unsigned u;
    printf("Enter hexadeciaml number:");
    scanf("%x",&u);
    printf("Decimal equivalent:%u\n",u);
    printf("Octal equivalent:%o\n",u);
    return 0;
}