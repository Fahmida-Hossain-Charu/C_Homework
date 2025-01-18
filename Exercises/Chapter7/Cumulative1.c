#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    if(argc!=2){
        printf("You must enter a password");
        exit(1);
    }
    const char *password="it'sCharu";//put this is double quote/it\'sCharu in command line
    if(!strcmp(argv[1],password))
    printf("Access Permitted");
    else
    printf("Access Denied");

    return 0;
}
