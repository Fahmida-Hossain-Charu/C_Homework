#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char str[80]="This is a file system test.\n";
    char *p;
    char ch;
    if((fp=fopen("MYFILE","w"))==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    //writing str to disk
    p=str;
    while (*p)
    {
       if(fputc(*p++,fp)==EOF){
        printf("Error writing file\n");
        exit(1);
       }
    }
    fclose(fp);
    if((fp=fopen("MYFILE","r"))==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    //read back from file
    while(ch=fgetc(fp)!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}