#include<stdio.h>
int main(){
    char num[80];
    printf("Enter floating point number:");
    scanf("%[0-9.]",num);//can take any combination of digits & dec point
    printf(num);
    return 0;
}