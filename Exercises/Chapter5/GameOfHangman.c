#include <stdio.h>
#include <string.h>
int main()
{
    char word[] = "concatenation";
    char temp[] = "-------------";
    char ch;
    int count;
    count = 0;
   
    do
    {
        printf("%s\n", temp);
        printf("Enter your guess: ");
        ch = getchar();
        getchar();//to consume the newline char left by getchar
        int guessMade=0;
        for (int i = 0; i < strlen(word); i++)
        {
            if (ch == word[i])
                temp[i] = ch;
            
        }
                count++;
            
        
    } while (strcmp(temp, word));
    printf("%s\n", temp);
    if(count<=15){
        printf("You guessed the word with %d guesses ", count);
        printf("Congrats you've won!");
    }
    else
    printf("You lost.Too many guesses %d ",count);
     
    return 0;
}