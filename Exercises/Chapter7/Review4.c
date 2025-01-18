#include<stdio.h>
int main(){
    float f,*fp;
    fp=&f;
    *fp=23.5;
    printf("%f",f);
}