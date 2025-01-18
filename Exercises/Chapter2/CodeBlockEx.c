#include<stdio.h>
int main(){
    int a,b,op;
    printf("Enter 1 to add,2 to subtract: ");
    scanf("%d",&op);
    if(op==1){
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        printf("Sum is:%d",a+b);
    }
    else{
         printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        printf("Difference is:%d",a-b);
    }
    return 0;
}