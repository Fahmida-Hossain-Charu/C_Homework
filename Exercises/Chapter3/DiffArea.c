#include<stdio.h>
int main(){
    int a,b,r;
    char ch;
    printf("Area of circle,square or rectamgle: ");
    ch=getchar();
    printf("\n");
    if(ch=='C'){
        printf("Enter radius of circle:\n");
        scanf("%d",&r);
        printf("Area of circle is: %f",(float)3.1416*r*r);
    }
    else if(ch=='S'){
        printf("Enter the side: ");
        scanf("%d",&a);
        printf("Area of square is:%d",a*a);
    }
    else if(ch=='T'){
        printf("Enter base :");
        scanf("%d",&a);
        printf("Enter height: ");
        scanf("%d",&b);
        printf("Area of triamgle is:%f",(a+b)/2.0);
    }
}