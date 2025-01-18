#include<stdio.h>
int main(){
    char ch;
    ch='a';
    for(int i=0;ch!='q';i++){
    printf("Pass:%d\n",i);
    ch=getchar();
    }
    return 0;
}