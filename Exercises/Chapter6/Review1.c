#include<stdio.h>
int main(){
    int num[10],even,odd;
    for(int i=0;i<10;i++){
        printf("Enter number: ");
        scanf("%d",&num[i]);
    }
    even=0;
    odd=0;
    for(int i=0;i<10;i++){
        if(num[i]%2==0)
        even=even+num[i];
        else 
        odd=odd+num[i];
    }
    printf("Sum of even numbers:%d\n",even);
    printf("Sum of odd numbers:%d",odd);
}