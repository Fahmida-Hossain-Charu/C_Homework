#include<stdio.h>
#include<string.h>
int main(){
    char str[80];
    do{
        printf("Enter string: ");
        gets(str);
    }while(strcmp("quit",str));
}