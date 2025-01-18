#include<stdio.h>
int main(){
    int a,b,op;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter 1 to add,2 to multiply: ");
    scanf("%d",&op);
    if(op==1)printf("%d",a+b);
    else printf("%d",a*b);
    return 0;
}