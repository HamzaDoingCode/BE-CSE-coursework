#include <stdio.h>
#include <conio.h>
double strtodoub(char[], char **);
int main()
{
    char string[50] = {0}; // For storing string
    char *stringRemains;   // To store address of 1st character of remaining string
    double d = 0;
    printf("Enter a string which contains a floating point number\n> ");
    int i = 0;
    while ((string[i] = getche()) != '\r')
    {
        i++;
    }
    string[i] = '\0'; // Replaces \r with \0
    printf("Complete String: %s\n",string);
    d = strtodoub(string, &stringRemains);
    printf("Double value from the string is: %.2lf\n",d);
    printf("Remaining string:%s\n",stringRemains);

    return 0;
}

double strtodoub(char *str, char **strAddress)
{
    double num = 0;
    double decimalPlace = 0.1; // Intializes to 0.1 for first decimal number
    int flagForDecimal = 0;
    int i = 0; // Index
    while ( (*(str+i) >= '0' && *(str+i) <= '9') || *(str+i) == '.')
    {

        if (*(str+i) == '.')
        {
            flagForDecimal = 1; // flag becomes one if decimal exist
            i++;
            continue;           // skips the iteration for '.'
        }
        if (flagForDecimal == 0)
        {
            // (str[i] - '0') Converts the given string into double value by subtracting its ASCII value
            num = num * 10 + (*(str+i) - '0'); // Stores the consecutive element of string OR digit of a number as a double
        }
        if (flagForDecimal == 1) // executes only if decimals remaining after integer
        {
            num = num + (*(str+i) - '0') * decimalPlace;
            decimalPlace /= 10; // converts decimal place into 0.01,0.001,and so on.
        }

        i++;
    }

    *strAddress = (str+i); // Store the 1st address of remaining characters
    return num;

}