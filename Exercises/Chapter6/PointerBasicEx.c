#include<stdio.h>
int main(){
    int i,*p;
    p=&i;
    for(i=0;i<10;i++)
    printf("%u ",*p);
}