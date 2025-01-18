#include<stdio.h>
double avg(void);
int main(){
printf("%f",avg());
return 0;
}
double avg(void){
    int i;
    double sum,no;
    sum=0.0;
    for(i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%lf",&no);
        sum+=no;
    }
    return sum/10.0;
}