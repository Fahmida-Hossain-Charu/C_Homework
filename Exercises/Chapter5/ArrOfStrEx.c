#include <stdio.h>
int main()
{
    char digit[10][10] = {
        "zero", "one", "two", "three",
        "four", "five", "six", "seven",
        "eight", "nine"};
    char num;
    printf("Enter num: ");
    scanf("%c", &num);
    printf("\n");
    num = num - '0';
    if (num >= 0 && num < 10)
        printf("%s", digit[num]);
}