#include<stdio.h>
int main(){
    char text[][80]={
        "When", "in", "the",
        "course", "of", "human",
        "events", " "
    };
    for(int i=0;text[i][0];i++){
        for(int j=0;text[i][j];j++){
            printf("%c",text[i][j]);
            printf(" ");
        }
    }
}