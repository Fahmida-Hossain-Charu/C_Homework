#include<stdio.h>
#include<string.h>
int main(){
    char str[80],*p;
    printf("Enter a string:");
    gets(str);
    p=str;
    while(*p && *p!=' ') p++;
    /*
    *p means thers's still char in str it hasn't ended
    */
    printf("Remainder of string:%s\n",p);
}