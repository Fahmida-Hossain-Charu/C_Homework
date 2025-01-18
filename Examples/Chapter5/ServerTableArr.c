#include <stdio.h>
int main()
{
    int ServerUser[5][2] = {
        1, 14,
        2, 28,
        3, 19,
        4, 8,
        5, 15};
    int server;
    printf("Enter server no: ");
    scanf("%d", &server);
    for (int i = 0; i < 5; i++)
    {
        if (server == ServerUser[i][0])
        {
            printf("There are %d users on server %d\n", ServerUser[i][1], server);
            break;
        }
    }
}