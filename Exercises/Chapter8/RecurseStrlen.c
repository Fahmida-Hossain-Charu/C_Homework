#include<stdio.h>
#include<string.h>
int rstrlen(char *str){
    
    if(*str){
        str++;
        return 1+rstrlen(str+1);
    }
    else return 0;
}
int main(){
    char str[100];
    gets(str);
    printf("The length of this string is %d",rstrlen(str));
    return 0;
}