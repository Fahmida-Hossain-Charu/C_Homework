#include<stdio.h>
int x=10;
int myfunc(int i);
int main(){
    int y=x;
    int z=myfunc(y);
    printf("%d %d",y,z);
}
int myfunc(int i){
    return i/2;
}