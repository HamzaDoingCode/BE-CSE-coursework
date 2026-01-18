#include <stdio.h>
#include <conio.h>

int main()
{
    char strings[10][20];
    int row = 0, coloumn = 0;
    char ch;
    printf("Enter 10 town names of your area:\n");
    for (row = 0; row < 10; row++)
    {
        printf("Enter town %d\n> ", row + 1);
        for (coloumn = 0; coloumn < 19; coloumn++)
        {
            ch = getche();
            if (ch == '\r')
            {
                break;
            }
            strings[row][coloumn] = ch;
        }
        strings[row][coloumn] = '\0'; // replaces last \n with \0
    }
    printf("\nUnsorted towns:\n");
    for (row = 0; row < 10; row++)
    {
        printf("%s", strings[row]); // prints each row of the strings
        printf("\n");               // Newline before next town
    }
    char temp[20];
    for (row = 0; row < 10 - 1; row++)
    {
        for (int nextRow = row + 1; nextRow < 10; nextRow++)
        {
            if (strings[row][0] > strings[nextRow][0])
            {
                // Copy row into temp
                for (coloumn = 0; strings[row][coloumn] != '\0'; coloumn++)
                {
                    temp[coloumn] = strings[row][coloumn]; // stores bigger string into temp variable
                }
                temp[coloumn] = '\0';

                // Copy nextRow into row
                for (coloumn = 0; strings[nextRow][coloumn] != '\0'; coloumn++)
                {
                    strings[row][coloumn] = strings[nextRow][coloumn]; // replaces bigger string with smaller string
                }
                strings[row][coloumn] = '\0'; // stores \0 to end of the string

                // Copy temp into nextrow
                for (coloumn = 0; temp[coloumn] != '\0'; coloumn++)
                {
                    strings[nextRow][coloumn] = temp[coloumn]; // replaces smaller string with bigger string
                }
                strings[nextRow][coloumn] = '\0'; // stores \0 to the end of string
            }
        }
    }
    printf("\nSorted towns:\n");
    for (row = 0; row < 10; row++)
    {
        printf("%s", strings[row]); // prints each row of the strings
        printf("\n");               // Newline before next town
    }

    return 0;
}