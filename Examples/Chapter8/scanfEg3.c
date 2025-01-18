#include <stdio.h>
int main()
{
    char str[80];
    printf("Enter letters and spaces\n");
    scanf("%[a-zA-Z ]", str);//space is added
    printf(str);
    return 0;
}