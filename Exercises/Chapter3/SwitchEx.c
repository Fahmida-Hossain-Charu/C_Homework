#include <stdio.h>

int main()
{
    char ch;
    int digit, punc, letter;
    digit = 0;
    punc = 0;
    letter = 0;
    printf("Enter char or ENTER to stop ");
    do
    {
        scanf("%c", &ch);
        switch (ch)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            digit++;
            break;
        case ';':
        case '.':
        case ':':
        case '?':
        case ',':
        case '!':
            punc++;
            break;
        default:
            letter++;
        }
    } while (ch != '\r');
    printf("\n Digits:%d\n", digit);
    printf("Punctuation:%d\n", punc);
    printf("Letters:%d\n", letter);
    return 0;
}