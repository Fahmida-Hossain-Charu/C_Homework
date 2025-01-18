#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<26;j++){
            for(int k=0;k<2;k++)
            printf("%c ",'A'+j);
        }
    }
}