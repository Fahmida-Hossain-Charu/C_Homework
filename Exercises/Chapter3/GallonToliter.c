#include<stdio.h>
int main(){
    float gallon,liter;
    printf("Enter gallon: ");
    scanf("%f",&gallon);
    do{
        printf("Liters:%f\n",gallon*3.7854);
        scanf("%f",gallon);
    }while(gallon!=0);
    return 0;
}