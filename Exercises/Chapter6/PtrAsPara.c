#include<stdio.h>
void func(int *p);
int main(){
    int i;
    func(&i);
    printf("%d",i);
    return 0;
}
void func(int *p){
    *p=-1;
}