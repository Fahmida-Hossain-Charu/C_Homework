#include <stdio.h>
#include <string.h>
int main()
{
    char pass[] = "Tristan";
    char check[10];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter your password: ");
        gets(check);
        if (!strcmp(pass, check))
        {
            printf("Log-on successful\n");
            break;
        }
        else
        {
            printf("Incorrect password.Try again\n");
        }
    }
    printf("Value of i after loop:%d\n",i);
    if (i == 3)
    {
        printf("Access denied \n");
    }
}