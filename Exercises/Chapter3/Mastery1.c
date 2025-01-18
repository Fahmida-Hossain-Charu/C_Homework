#include<stdio.h>
int main(){
    char ch;
    printf("Enter lower case characters: ");
    printf("Press enter to quit \n");
    do{
        ch=getchar();
        if(ch!='\n')printf("%c ",ch-32);
    }while(ch!='\n');
    return 0;
}