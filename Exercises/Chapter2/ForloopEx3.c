#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=2;i<(num/2)+1;i++){
        if(num%i==0)printf("%d ",i);
    }
return 0;
}