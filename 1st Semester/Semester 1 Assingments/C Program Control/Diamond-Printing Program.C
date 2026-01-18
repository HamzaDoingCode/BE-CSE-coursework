#include <stdio.h>

int main()
{
    int rows;
    printf("Enter Number of rows(An odd number between 1 and 19): ");
    scanf("%d", &rows);

    rows = (rows / 2) + 1; // Half of diamond height

    //  Upper portion
    for (int upperRows = 1; upperRows <= rows; upperRows++)
    {
        for (int gap = upperRows; gap <= rows - 1; gap++)
        {
            printf(" "); // On each iteration number of gaps decreases
        }
        for (int star = 1; star <= 2 * upperRows - 1; star++)
        {
            printf("*"); // In 1st row it prints one star in 2nd it prints 3 and so on.
        }
        printf("\n");
    }

    // Lower portion

    for (int lowerRows = rows - 1; lowerRows >= 1; lowerRows--)
    {
        for (int gap = 1; gap <= rows - lowerRows; gap++)
        {
            printf(" "); // On each iteration number of gaps increases
        }
        for (int stars = 1; stars <= lowerRows * 2 - 1; stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
