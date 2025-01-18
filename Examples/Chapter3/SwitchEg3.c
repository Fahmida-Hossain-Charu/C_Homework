#include<stdio.h>
int main(){
    char ch;
    printf("Enter the letter: ");
    ch=getchar();
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf(" is a vowel\n");
    default:
    printf(" is a consonant\n");
    }
}