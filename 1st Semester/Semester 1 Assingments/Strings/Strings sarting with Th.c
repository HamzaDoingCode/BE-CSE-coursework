#include <stdio.h>
#include <conio.h>

int main()
{
    char strings[10][50] = {0}, ch;
    int row = 0, coloumn = 0;
    printf("Type 10 strings\n");
    
    for (row = 0; row < 10; row++)
    {
        printf("Enter string %d\n> ", row + 1);
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
    
    printf("\n----------------------\n");
    printf("Strings starting with \"Th\"\n");
    printf("----------------------\n");
    for (row = 0; row < 10; row++)
    {
        if (strings[row][0] == 'T' || strings[row][0] == 't')
        {
            if (strings[row][1] == 'H' || strings[row][1] == 'h')
            {
                printf("%s", strings[row]);
                printf("\n");
            }
        }
    }
    
    return 0;
}