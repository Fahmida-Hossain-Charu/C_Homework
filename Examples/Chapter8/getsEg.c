#include<stdio.h>
int main(){
    char *p,str[80];
    printf("Enter a string:");
    p=gets(str);
    if(p)//if(gets(str))
    printf("%s %s",p,str);
    return 0;
}