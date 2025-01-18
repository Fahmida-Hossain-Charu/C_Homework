#include<stdio.h>
int main(){
    char name[80],date[80],phone[80];
    printf("Enter name,birthdate & phone number:\n");
    scanf("%s%s%s",name,date,phone);
    printf("%s %s %s",name,date,phone);
    return 0;
}