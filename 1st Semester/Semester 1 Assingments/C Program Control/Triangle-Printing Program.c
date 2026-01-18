#include <stdio.h>

int main()
{

    // For Triangle 1
    for (int rows = 1; rows <= 10; rows++)
    {
        for (int sterick = 1; sterick <= rows; sterick++)
        {
            printf("%s","*");
        }
        printf("\n"); // To add newline after each row
    }

    // For Triangle 2
    for (int rows = 10; rows >= 1; rows--)
    {
        for (int sterick = 1; sterick <= rows; sterick++)
        {
            printf("%s","*");
        }
        printf("\n"); // To add newline after each row
    }
    // For Triangle 3
    for (int rows = 1; rows <= 10; rows++)
    {
        for (int space = 1; space < rows; space++)
        {
            printf("%c",' ');
        }
        for (int stericks = 10; stericks >= rows; stericks--)
        {
            printf("%s","*");
        }
        printf("\n");
        
    }
    // For Triangle 4
    for (int rows = 10; rows >= 1; rows--)
    {
        for (int space = 1; space < rows; space++)
        {
            printf("%c",' ');
        }
        for (int stericks = 10; stericks >= rows; stericks--)
        {
            printf("%s","*");
        }
        printf("\n");
        
    }

    return 0;
}