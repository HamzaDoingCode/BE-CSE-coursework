#include <stdio.h>
#include <conio.h>

char *stringstr(char[], char[]); // returns a pointer of type char

int main()
{
    int i;
    char c;
    char string[50] = {0};
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

    int len = 0;
    while (sub[len] != '\0') // calculates length of sub string
    {
        len++;
    }

    printf("The string: %s\n", string);
    printf("The sub string: %s\n", sub);
    printf("The first occurence of word %s starts from: %s\n", sub, stringstr(string, sub));
    printf("The second occurence of word %s starts from: %s\n", sub, stringstr(stringstr(string, sub) + len, sub));
    // Due to the first parameter now main string starts after the null index of the first occurence

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