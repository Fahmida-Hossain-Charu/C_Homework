#include<stdio.h>
int main(){
    char ch,smallest;
    printf("Enter 10 letters \n");
    smallest='z';
    for(int i=0;i<10;i++){
        ch=getchar();
        if(ch<smallest)smallest=ch;
    }
    printf("\nThe smallest char is %c",smallest);
    return 0;
}