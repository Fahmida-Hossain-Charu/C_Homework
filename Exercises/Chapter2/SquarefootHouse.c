#include<stdio.h>
int main(){
    int rooms,len,width,total;
    printf("Number of rooms: ");
    scanf("%d",&rooms);
    total=0;
    for(int i=rooms;i>0;i--){
        printf("Enter length: ");
        scanf("%d",&len);
        printf("Enter width: ");
        scanf("%d",&width);
        total=total+len*width;
    }
    printf("Total square footage is:%d ",total);
}