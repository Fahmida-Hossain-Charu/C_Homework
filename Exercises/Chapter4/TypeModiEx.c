#include<stdio.h>
int main(){
    unsigned long int dist;
    printf("Enter distance: ");
    scanf("%lu",&dist);
    printf("Light takes %ld seconds ",dist/186000);
}