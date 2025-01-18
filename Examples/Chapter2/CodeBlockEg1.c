#include<stdio.h>
int main(){
    float num;
    int choice;
    printf("1:Feet to meters,2:Meters to feet ");
    printf("Enter choice ");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter the number of feet: ");
        scanf("%f",&num);
        printf("Meters:%f",num/3.28);
    }
    else{
        printf("Enter the number of meter: ");
        scanf("%f",&num);
        printf("Feet:%f",num*3.28);
    }
    return 0;
}