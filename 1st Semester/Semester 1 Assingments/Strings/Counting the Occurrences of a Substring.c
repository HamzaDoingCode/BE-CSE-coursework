#include <stdio.h>
#include <conio.h>

char *stringstr(char[], char[]); // returns a pointer of type char

int main()
{
    int i;
    char c;
    char string[100] = {0};
    i = 0;
    printf("Enter a string\n> ");
    while ((c = getche()) != '\r')
    {
        string[i++] = c;
    }
    string[i] = '\0';

    char sub[10] = {0};
    i = 0;
    printf("Enter a sub string\n> ");
    while ((c = getche()) != '\r')
    {
        sub[i++] = c;
    }
    sub[i] = '\0';

    int lenOfSub = 0;
    while (sub[lenOfSub] != '\0') // calculates lenghth of sub string
    {
        lenOfSub++;
    }

    printf("The string: %s\n", string);
    printf("The sub string: %s\n", sub);

    int subCount = 0;
    char *temp = string; // intially temp = string and function start from 1st index of string
    i = 0;
    while ((temp = stringstr(temp, sub)) != NULL) // loop continues until a null is found
    {
        subCount++;
        temp = temp + lenOfSub; // now function starts after the previous occurrence of sub
    }
    printf("The sub string occur %d times", subCount);
    return 0;
}
char *stringstr(char string[], char sub[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        int j = 0;
        while (sub[j] != '\0' && string[i + j] == sub[j])
        {
            j++; // If both characters match, loop continues to compare next characters of string and substring
        }
        if (sub[j] == '\0') // executes only if complete substring is found in string (reached end of substring).
        {
            return &string[i]; // returns address of the position where substring starts in main string.
        }
        i++;
    }
    return NULL; // return null if sub string not found
}