#include <stdio.h>
#include <conio.h>

int main()
{
    char s[100];
    printf("Enter a word OR a sentence and check alternate uppercase and lowercase letter:\n> ");
    int i = 0;
    while ((s[i] = getche())  != '\r')
    {
        i++;
    }
    s[i] = '\0'; // replaces last \n with \0(null)

    printf("\nSentence in lower Case letters\n");
    for (int j = 0; j < i; j++)
    {
        if (s[j] >= 'A' && s[j] <= 'Z')
        {
            s[j] += 32; // converts the capital letter into small by converting its ASCII value
        }
        printf("%c", s[j]); // prints all leters of the array.
    }

    printf("\nSentence in Upper Case letters\n");
    for (int j = 0; j < i; j++)
    {
        if (s[j] >= 'a' && s[j] <= 'z')
        {
            s[j] -= 32; // converts the small letter into capital by converting its ASCII value
        }
        printf("%c", s[j]); // prints all leters of the array.
    }

    return 0;
}