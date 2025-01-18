#include<stdio.h>
int main(){
    int *p,q;
    p=&q;
    q=1;
    // printf("%p ",p);
    // *p++;
    // printf("%d %p\n",q,p);
    (*p)++;
    printf("%d %p\n",q,p);
}