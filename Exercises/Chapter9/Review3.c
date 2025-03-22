#include<stdio.h>
int isprime(int n);
int main(){
    int n,count;
    count=0;
    for(n=2;n<1001;n++){
        if(isprime(n)){
            printf("%d ",n);
            count++;
            if(count==4){
                printf("\n");
                count=0;
            }
        }
    }
    return 0;
}
int isprime(int n){
    int j;
    for(j=2;j*j<=n;j++){
        if(!(n%j))
        return 0;
    }
}