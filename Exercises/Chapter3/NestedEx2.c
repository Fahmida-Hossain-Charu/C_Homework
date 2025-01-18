#include<stdio.h>
int main(){
    char ch;
    int i;
    for(int i=0;i<10;i++){
        printf("\nEnter a letter: ");
        ch=getchar();
        printf("\n");
        for(ch;ch;ch--)
        printf("%c",'.');
    }
    return 0;
}