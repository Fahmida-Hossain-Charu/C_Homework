#include<stdio.h>
float convert();
int main(){
    printf("%f",convert());
    return 0;
}
float convert(){
    float dollars;
    printf("Enter dollars: ");
    scanf("%f",&dollars);
    return (float)dollars/2.0;
}