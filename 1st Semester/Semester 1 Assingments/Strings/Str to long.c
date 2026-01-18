#include <stdio.h>
#include <conio.h>
long strtolong(char[], char **, int);
int main()
{
    char string[50] = {0}; // For storing string
    char *stringRemains;   // To store address of 1st character of remaining string
    long d = 0;
    printf("Enter a string which contains a long integer number\n> ");
    int i = 0;
    while ((string[i] = getche()) != '\r')
    {
        i++;
    }
    string[i] = '\0'; // Replaces \r with \0
    printf("Complete String: %s\n", string);
    d = strtolong(string, &stringRemains, 0);
    printf("Long integer value from the string is: %ld\n", d);
    printf("Remaining string:%s\n", stringRemains);

    return 0;
}

long strtolong(char *str, char **strAddress, int base)
{
    int i = 0; // Index
    while (str[i] == ' ')
        i++; // Skip leading spaces

    int sign = 0;
    if (*(str + i) == '+')
    {
        sign = 1;
        i++;
    }
    else if (*(str + i) == '-')
    {
        sign = -1;
        i++;
    }

    if (base == 0)
    {
        if (str[i] == '0')
        {
            if (str[i + 1] == 'x' || str[i + 1] == 'X')
            {
                base = 16;
                i += 2;
            }
            else
            {
                base = 8;
                i++;
            }
        }
        else
        {
            base = 10;
        }
    }
    

    long num = 0;
    if (base == 10)
    {
        while (*(str + i) >= '0' && *(str + i) <= '9')
        {
            // (str[i] - '0') Converts the given string into long value by subtracting its ASCII value
            num = num * 10 + (*(str + i) - '0'); // Stores the consecutive element of string OR digit of a number as a long int

            i++;
        }
    }
    else if (base == 16)
    {
        while ((*(str + i) >= '0' && *(str + i) <= '9') ||
               (*(str + i) >= 'a' && *(str + i) <= 'f') ||
               (*(str + i) >= 'A' && *(str + i) <= 'F'))
        {
            if (*(str + i) >= '0' && *(str + i) <= '9')
            {
                // (str[i] - '0') Converts the given string into long value by subtracting its ASCII value
                num = num * 16 + (*(str + i) - '0'); // Stores the consecutive element of string OR digit of a number as a long int

                i++;
            }
            else if (*(str + i) >= 'A' && *(str + i) <= 'F')
            {
                // (str[i] - 'A' + 10) Converts the given string into long value by subtracting its ASCII value
                num = num * 16 + (*(str + i) - 'A' + 10); // Stores the consecutive element of string OR digit of a number as a long int

                i++;
            }
            else if (*(str + i) >= 'a' && *(str + i) <= 'f')
            {
                // (str[i] - 'A' + 10) Converts the given string into long value by subtracting its ASCII value
                num = num * 16 + (*(str + i) - 'a' + 10); // Stores the consecutive element of string OR digit of a number as a long int

                i++;
            }
        }
    }
    else if (base == 8)
    {
        while (*(str + i) >= '0' && *(str + i) <= '7')
        {
            // (str[i] - '0') Converts the given string into long value by subtracting its ASCII value
            num = num * 8 + (*(str + i) - '0'); // Stores the consecutive element of string OR digit of a number as a long int

            i++;
        }
    }

    *strAddress = (str + i); // Store the 1st address of remaining characters

    num *= sign;
    return num;
}