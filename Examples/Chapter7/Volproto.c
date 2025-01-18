#include<stdio.h>
double volume(double s1,double s2,double s3);
int main(){
    double vol;
    vol=volume(12.3,4.78,9.8);
    printf("Volume:%f",vol);
}
double volume(double s1,double s2,double s3){
    return s1*s2*s3;
}