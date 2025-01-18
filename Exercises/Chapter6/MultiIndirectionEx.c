#include<stdio.h>
int main(){
    int n,*ip,**mip;
    ip=&n;
    mip=&ip;
    **mip=23;
    printf("%p %p %p ",ip,mip,&mip);
}