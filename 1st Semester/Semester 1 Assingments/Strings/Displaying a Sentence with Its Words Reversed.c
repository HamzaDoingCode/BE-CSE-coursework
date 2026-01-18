#include <stdio.h>
#include <conio.h>

int main()
{
    char string[100] = {0};
    int word_count = 0;
    char c;
    int len = 0;
    int last_character = 0;
    int start_character = 0;
    int temp = 0;
    int j;

    printf("Enter a string\n> ");
    int i = 0;
    while (scanf("%c", &c) == 1 && c != '\n')
    {
        string[i++] = c;
    }
    string[i] = '\0';

    i = 0;
    while (string[i] != '\0')
    { // counts length of the string
        len++;
        i++;
    }

    i = len - 1; // iterations starts from 2nd last character ignoring \0
    last_character = len - 1;
    start_character = last_character;
    while (i >= 0) // loop continues till end(actually start) of string
    {
        while (string[i] != ' ' && i >= 0) // continues till word continues
        {
            i--;               // decrement index of the string
            start_character--; // decrement starting character of the word
        }
        temp = start_character;                   // stores the index of starting character
        for(j = start_character + 1; j <= last_character; j++) // prints till starting chracter reach ending character
        {
            printf("%c", string[j]);
            start_character++;
        }

        while ((string[i] == ' ') && i >= 0) // skips spaces
        {
            i--;
            temp--;
            printf(" "); // prints spaces
        }
        last_character = temp;            // now last character is moved back and process starts from next word
        start_character = last_character; // intially both are equal.
    }

    return 0;
}