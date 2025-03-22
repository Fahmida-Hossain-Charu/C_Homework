#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    FILE *fp;
    char ch;
    if(argc!=3){
        printf("Usage:fina <file name> <ch>\n");
        exit(1);
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Error opening file\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch==*argv[2]){//argv[2] is a str but this is a char
            printf("%c found",ch);
            break;
        }
    }
    fclose(fp);
    return 0;
}