#include<stdio.h>
int main(){
    unsigned long i;
    printf("%-10s %-15s %-20s\n","Number","Square","Cube");
    for(i=2;i<=100;i++)
    printf("%-10lu %-15lu %-20lu\n",i, i*i, i*i*i);//it's lu 
    return 0;
}