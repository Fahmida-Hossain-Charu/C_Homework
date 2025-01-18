#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(;n>0;n--){
        printf("%d\n",n);
        printf("\a");
    }
    return 0;
}