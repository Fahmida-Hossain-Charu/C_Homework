#include<stdio.h>
int main(){
    unsigned u;
    long l;
    short s;
    double d;
    printf("Enter unsigned: ");
    scanf("%u",&u);
    printf("Enter long: ");
    scanf("%ld",&l);
    printf("Enter short: ");
    scanf("%hd",&s);
    printf("Enter double: ");
    scanf("%lf",&d);
    printf("%u %ld %hd %lf\n",u,l,s,d);
}