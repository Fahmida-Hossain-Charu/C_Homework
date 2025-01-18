#include<stdio.h>
#include<string.h>

int main(){
    char *p[]={"Yes","No","Maybe.Rephrase the question"};
    char question[80];
    printf("Ask the question:");
    gets(question);
    
    printf(p[strlen(question)%3]);
}