#include<stdio.h>
int main(){
    int total=0,i,j;
    do{
        printf("Enter next no(0 to stop): ");
        scanf("%d",&i);
        printf("Enter again: ");
        scanf("%d",&j);
        if(i!=j){
            printf("Mismatch\n");
            continue;
        }
        total=total+i;
    }while(i!=0);
    printf("Total is %d\n",total);
    return 0;
}