#include <stdio.h>
#include <conio.h>

int main()
{
    char string[100] = {0};
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int whitespaces = 0;

    printf("Enter a string and check total number of vowels, consonants, digits, and white spaces\n> ");
    int i = 0;
    while ((string[i] = getche()) != '\r')
    {
        i++;
    }
    string[i] = '\0';
    i = 0;
    while (string[i] != '\0')
    {
        // loop first check a charcter is vowel or nor if it is not then it checks for consonants
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {
            vowels++;
        }
        else if ((string[i] >= 'a' && string[i] <= 'z') || string[i] == 'A' || string[i] == 'Z')
        {
            consonants++;
        }
        else if (string[i] == ' ')
        {
            whitespaces++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            digits++;
        }

        i++;
    }

    printf("\nTotal Number of Vowels are: %d\n", vowels);
    printf("Total Number of consonants are: %d\n", consonants);
    printf("Total Number of white spaces are: %d\n", whitespaces);
    printf("Total Number of digits are: %d\n", digits);

    return 0;
}