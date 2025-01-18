#include<stdio.h>
int main(){
    char str[80];
    double d;
    int i,num=0;
    printf("Enter a string,double and integer:");
    scanf("%s%lf%d%n",str,&d,&i,&num);
    printf("Number of characters read:%d",num);
    return 0;
}