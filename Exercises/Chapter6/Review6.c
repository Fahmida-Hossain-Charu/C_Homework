#include<stdio.h>
#include<string.h>
int main(){
    char phone[][2][40]={
        "mom","998-7897",
        "dad","998-2345"
        "sister","998-1010",
        "michael","998-2315",
        " "," "
    };
    char name[80];
    int i;
    printf("Enter name: ");
    gets(name);
    for(i=0;phone[i][0][0];i++){
        if(!strcmp(name,phone[i][0]))
        printf("Number:%s\n",phone[i][1]);
    }
}