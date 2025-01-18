#include<stdio.h>
// void soundspeed(void);
void soundspeed(double distance);
double distance;
int main(){
    double distance;
    printf("Enter distance in feet: ");
    scanf("%lf",&distance);
  //  soundspeed();
    soundspeed(distance);
}
// void soundspeed(void){
//     printf("Travel time :%f",distance/1129);
// }
void soundspeed(double distance){
 printf("Travel time :%f",distance/1129);
}