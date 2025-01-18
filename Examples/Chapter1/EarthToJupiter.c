#include<stdio.h>
int main(){
    float e_days,j_years;
    printf("Enter earth days: ");
    scanf("%f",& e_days);
    j_years=e_days/(365.0*12.0);
    printf("Equivalent jovian years:%f",j_years);
    return 0;
}