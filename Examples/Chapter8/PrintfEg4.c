#include<stdio.h>
int main(){
    int i=0;
    printf("%d %f\n%n",100,123.23,&i);
    printf("%d characters output so far",i);
    return 0;
}