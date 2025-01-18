#include<stdio.h>
#include<math.h>

double hypot(double s1,double s2){
    double hypotenuse=sqrt((s1*s1)+(s2*s2));
    return hypotenuse;
}
int main(){
    double a,b,hypotenuse;
    scanf("%lf %lf",&a,&b);
    hypotenuse=hypot(a,b);
    printf("Length of hypotenuse is %lf",hypotenuse);
}
