#include <stdio.h>
void RectangleOfAstericks(int, int);

int main()
{
    int side1, side2;
    for (int i = 1; i <= 3; i++)
    {
        printf("Input 1st side for height of rectangle and 2nd side for bredth\n");
        printf("Enter sides of a rectangle: ");
        scanf("%d %d", &side1, &side2);
        RectangleOfAstericks(side1, side2);
        printf("----------------------------\n"); // seperator for next rectangle
    }

    return 0;
}
void RectangleOfAstericks(int side1, int side2)
{
    // side 1 = rows and side 2 = coloumns
    for (int row = 1; row <= side1; row++)
    {
        for (int coloumn = 1; coloumn <= side2; coloumn++)
        {
            printf("*");
        }
        printf("\n");
    }
}