#include <stdio.h>
#include <conio.h>

int main()
{
    char strings[10][50] = {0}, ch;
    int row = 0, coloumn = 0, len = 0;
    printf("Type 10 strings\n");
    for (row = 0; row < 10; row++)
    {
        printf("Type string %d\n> ", row + 1);
        coloumn = 0;
        while (coloumn < 50)
        {
            ch = getche(); // inputs character
            if (ch == '\r')
            {
                break;
            }
            strings[row][coloumn] = ch; // stores character
            coloumn++;
        }
        strings[row][coloumn] = '\0'; // stores a null character at the end of string
    }
    printf("\n----------------------\n");
    printf("All Strings\n");
    printf("----------------------\n");
    for (row = 0; row < 10; row++)
    {
        printf("%s", strings[row]);
        printf("\n");
    }
    char a, b, c, d, e;
    printf("\n----------------------\n");
    printf("Strings ending with \"tion\"\n");
    printf("----------------------\n");
    for (row = 0; row < 10; row++)
    {
        len = 0;

        while (strings[row][len] != '\0')
            len++; // counts lenghth of the string

        // stores last 4 characters in variables to make comparing easy
        if (len >= 4)
        {
            a = strings[row][len - 4];
            b = strings[row][len - 3];
            c = strings[row][len - 2];
            d = strings[row][len - 1];
        

        //  Checks whether last character contains tion or not.
        if ((a == 'T' || a == 't') && (b == 'I' || b == 'i') && (c == 'O' || c == 'o') &&
            (d == 'N' || d == 'n'))
        {
            printf("%s", strings[row]);
            printf("\n");
        }
        }
    }   

    return 0;
}