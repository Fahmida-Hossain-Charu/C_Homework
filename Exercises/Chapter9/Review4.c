#include<stdio.h>
int main(){
    double d;
    char ch;
    char str[80];
    printf("Enter a double,character & string:\n");
    scanf("%lf %c %20s",&d,&ch,str);
    printf("%lf %c %s",d,ch,str);
    return 0;
}