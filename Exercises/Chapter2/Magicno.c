#include<stdio.h>
int main(){
    int magic,guess,i;
    magic=269713;
    guess=0;
    for(i=0;i<10 &&guess !=magic;i++){
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess==magic){
            printf("Right!");
            printf("%d is the magic number\n",magic);
        }
        else{
            printf("Sorry you're wrong!");
            if(guess>magic)printf("Your guess is high\n");
            else printf("Your guess is low\n");
        }
    }
    return 0;
}