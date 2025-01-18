#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Why I'm doing this";
    char str2[80],*p1,*p2;
    p1=str1+strlen(str1)-1;//str1 points to the 1st element of array,strlen will take to null terminator so -1 to 
    //take to the last element
    p2=str2;
    while(p1>=str1){
        //both p1,str1 are pointers str1 refers the address of 1st element p1 refers last element
        *p2++=*p1--;
        
    }
    *p2='\0';
    printf("%s\n %s",str1,str2);

}