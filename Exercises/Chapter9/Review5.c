#include<stdio.h>
int main(){
    char str[80];
    printf("Enter leading digits followed by a string\n");
    scanf("%*[0-9]%s",str);
    printf("%s",str);
    return 0;
}