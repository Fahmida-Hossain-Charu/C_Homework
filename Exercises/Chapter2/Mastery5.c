#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        printf("%d\t",i);
        if(i%5==0)printf("\n");
    }
    return 0;
}