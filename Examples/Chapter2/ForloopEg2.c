#include<stdio.h>
int main(){
     //prime number tester
    int num,i,is_prime;
    printf("Enter the number to be test: ");
    scanf("%d",&num);
    is_prime=1;
    for(i=2;i<=num/2;i++)
        if(num%i==0)is_prime=0;
        
        if(is_prime==1)printf("The no is prime");
        else printf("The no isn't prime ");
    
    return 0;
}