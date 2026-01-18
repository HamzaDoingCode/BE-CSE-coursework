#include <stdio.h>
#include <conio.h>

int main()
{
    char string[100] = {0};
    int word_count = 0;
    char c;

    printf("Enter # character to end\n");
    printf("Enter a string\n> ");
    int i = 0;
    while (scanf("%c", &c) == 1 && c != '#')
    {
        string[i++] = c;
    }
    string[i] = '\0';

    i = 0;
    while (string[i] != '\0' && string[i] != '#') // loop continues till end of string
    {
        while ((string[i] == ' ' || string[i] == '\n') && string[i] != '\0' && string[i] != '#' ) // skips spaces
        {
            i++;
        }
        if (string[i] == '\0' || string[i] == '#') // terminate the loop if either of the condition becomes true and dont increement word count
        {
           break;
        }
        
        while (string[i] != ' ' && string[i] != '\n' && string[i] != '\0' && string[i] != '#') // skips word
        {
            i++;
        }
        word_count++; // increment word count when iteration reache to the space
    }
    printf("Total Number of words in the string are: %d\n", word_count);

    return 0;
}