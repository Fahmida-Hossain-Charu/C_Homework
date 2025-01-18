#include <stdio.h>
#include<string.h>
int main()
{
    int arr[10], i, j;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    
    }
    for(i=0;i<10;i++){//checks for every number
    for (j = i + 1; j < 10; j++)//compare with from the next no to onwards
    {
        if (arr[i] == arr[j])
            printf("%d is duplicated\n", arr[i]);
            break;
    }
}
}


