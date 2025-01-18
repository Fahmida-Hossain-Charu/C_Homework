#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[80],*p;
    printf("Enter a string:");
    gets(str);
    p=str;
    while(*p){
        *p=toupper(*p);
        p++;
    }
    printf("Uppercase:%s\n",str);
    p=str;
    while(*p){
        *p=tolower(*p);
        p++;
    }
    printf("Lowercase:%s\n",str);
}