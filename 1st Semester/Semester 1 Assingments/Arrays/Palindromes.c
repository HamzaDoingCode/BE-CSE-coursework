#include <stdio.h>
int testPalindrome(char[], int, int);

int main()
{
    int palindrome;
    char string[20] = {0};
    printf("Enter a word or a sentence\n> ");
    int i = 0;
    do
    {
        scanf("%c", &string[i]);
    } while (string[i++] != '\n'); // inputs string
    string[i - 1] = '\0'; // replace the last \n with \0
    printf("\n"); // newline between string and result

    palindrome = testPalindrome(string, 0, i - 2);
    if (palindrome == 1)
    {
        printf("Provided string is palindrome!\n");
    }
    else
    {
        printf("Provided string is not a palindrome!\n");
    }

    return 0;
}
int testPalindrome(char string[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    else
    {
        if (string[start] == ' ')
        {
            return testPalindrome(string, start + 1, end); // ignore spaces and come to next value
        }
        if (string[end] == ' ')
        {
            return testPalindrome(string, start, end - 1); // ignore spaces and come to previous value
        }
        // Convert uppercase to lowercase manually
        if (string[start] >= 'A' && string[start] <= 'Z')
            string[start] = string[start] + 32;
        if (string[end] >= 'A' && string[end] <= 'Z')
            string[end] = string[end] + 32;

        if (string[start] != string[end])
        {
            return 0; // return 0 immediately after founding miss matched charcters
        }
        return testPalindrome(string, start + 1, end - 1); // recursive call
    }
}
