#include<stdio.h>
int main(){
    int i,*p;
    p=&i;
    *p=1;
    printf("%d",i);
}