#include<stdio.h>
int fact(int a);
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int factorial=1;
    factorial=fact(x);
    printf("Factorial of %d is %d ",x,factorial);
    return 0;
}
int fact(int a){
    
  if(a==1) return 1;
  else return a*fact(a-1);
}