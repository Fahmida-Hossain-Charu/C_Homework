#include<stdio.h>
#include<string.h>
int main(){
    char str1[80],str2[80];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    //length 
    printf("%s is %d long\n",str1,strlen(str1));
    printf("%s is %d long\n",str2,strlen(str2));
    //comparison
    int i=strcmp(str1,str2);
    if(i==0)
    printf("Strings are equal ");
    else printf("Strings aren't equal ");
    //concatenate
    if(strlen(str1)+strlen(str2)){
        strcat(str1,str2);
        printf("%s\n",str1);//str1 is now helloworld
    }
    //copy
    strcpy(str1,str2);
    printf("%s %s\n",str1,str2);//str2 isn't modified it's just copied to str1
}
