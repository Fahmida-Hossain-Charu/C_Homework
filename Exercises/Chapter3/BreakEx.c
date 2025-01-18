#include<stdio.h>
int main(){
    float i;
    char ch;
    printf("Tip for tables ");
    for(i=1.0;i<101.0;i++){
        printf("%f %f %f %f\n",i,i+i*0.1,i+i*0.15,i+i*0.20);
        printf("More? ");
        ch=getchar();
        printf("\n");
        if(ch=='N')break;
    }
}