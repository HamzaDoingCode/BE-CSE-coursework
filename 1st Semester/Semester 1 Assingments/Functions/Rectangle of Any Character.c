#include <stdio.h>
#include <conio.h>
void RectangleOfCharacter(int, int, char);
int main()
{
    int side1, side2;
    char character;
    for (int i = 1; i <= 3; i++)
    {
        printf("Three tries are given\n");
        printf("Input 1st side for height of rectangle and 2nd side for bredth\n");
        printf("Enter chracter for the Rectangle: ");
        character = getche();
        printf("\nEnter sides of a rectangle: ");
        scanf("%d %d", &side1, &side2);
        RectangleOfCharacter(side1, side2, character);
        printf("----------------------------\n"); // seperator for next rectangle
    }

    return 0;
}
void RectangleOfCharacter(int side1, int side2, char fillCharacter)
{
    // side 1 = rows and side 2 = coloumns
    for (int row = 1; row <= side1; row++)
    {
        for (int coloumn = 1; coloumn <= side2; coloumn++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}