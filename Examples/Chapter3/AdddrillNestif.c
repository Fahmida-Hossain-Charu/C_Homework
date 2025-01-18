#include<stdio.h>
int main(){
    int answer,count,again;
     for(count=1;count<11;count++){
        printf("What is %d +%d? ",count,count);
        scanf("%d",&answer);
        if(answer==count+count)printf("Right! ");
        else{
            printf("Sorry you're wrong");
            printf("Try again\n");
             printf("\nWhat is %d +%d? ",count,count);
        scanf("%d",&answer);
         if(answer==count+count)printf("Right! ");
         else
            printf("Wrong,The answer is %d\n",count+count);
        }
    }
    return 0;
}