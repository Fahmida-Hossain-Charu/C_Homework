#include<stdio.h>
int main(){
    char first[21],middle[21],last[21];
    printf("Enter your full name:");
    scanf("%20s %20s %20s",first,middle,last);
    printf("%s %s %s",first,middle,last);
    return 0;
}