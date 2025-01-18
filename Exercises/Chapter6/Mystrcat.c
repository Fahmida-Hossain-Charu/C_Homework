#include<stdio.h>
#include<string.h>
void mystrcat(char *to,char *from);
int main(){
    char str[80];
    strcpy(str,"first part ");
    mystrcat(str,"second part");
    printf(str);
    return 0;
}
void mystrcat(char *to,char *from){
    while(*to) to++;
    while(*from) *to++=*from++;
    *to='\0';
}