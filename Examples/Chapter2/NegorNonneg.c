#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num<0)printf("Number is negative");
    if(num>-1)printf("Number is non-negative");
    return 0;
}