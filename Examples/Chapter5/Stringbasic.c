#include<stdio.h>
#include<string.h>
int main(){
    char str[80];
gets(str);
printf("%s\n",str);
strcpy(str,"Hello");
printf("%s\n",str);
strcat(str," there");
printf("%s\n",str);
strcmp("one","ONE");
printf("%d",strcmp("one","ONE"));
}