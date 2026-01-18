#include <stdio.h>
void printInfo(void);
void RectangleOfCharacter(int, int, char);
void RightTriangleOfCharacter(int, char);
void InvertedRightTriangleOfCharacter(int, char);
void SquareOfCharacter(int, char);
void HollowRectangleOfCharacter(int, int, char);
void clearInputBuffer(void);

int main()
{
    while (1)
    {
        char character;                                       // for shapes
        int height;                                           // for triangles
        int side1ForHollowRectangle, side2ForHollowRectangle; // for Hollow rectangle
        int side1, side2;                                     // for rectangle
        int side;                                             // for square
        int choice;

        printInfo();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Input 1st side for height of rectangle and 2nd side for bredth\n");
            printf("Enter character for the Rectangle: ");
            scanf(" %c", &character);
            printf("Enter sides of a rectangle: ");
            scanf("%d %d", &side1ForHollowRectangle, &side2ForHollowRectangle);

            printf("HOLLOW RECTANGLE\n\n");
            HollowRectangleOfCharacter(side1ForHollowRectangle, side2ForHollowRectangle, character);
            printf("----------------------------\n"); // seperator for next Shape
            break;
        case 2:
            printf("Input 1st side for height of rectangle and 2nd side for bredth\n");
            printf("Enter chracter for the Rectangle: ");
            scanf(" %c", &character);
            printf("Enter sides of a rectangle: ");
            scanf("%d %d", &side1, &side2);

            printf("RECTANGLE\n\n");
            RectangleOfCharacter(side1, side2, character);
            printf("----------------------------\n"); // seperator for next Shape
            break;
        case 3:
            printf("Enter chracter for the Right Triangle: ");
            scanf(" %c", &character);
            printf("Enter height of a Right Triangle: ");
            scanf("%d", &height);

            printf("RIGHT TRIANGLE\n\n");
            RightTriangleOfCharacter(height, character);
            printf("----------------------------\n"); // seperator for next Shape
            break;
        case 4:
            printf("Enter chracter for the Inverted Right Triangle: ");
            scanf(" %c", &character);
            printf("Enter height of a Inverted Right Triangle: ");
            scanf("%d", &height);

            printf("INVERTED RIGHT TRIANGLE\n\n");
            InvertedRightTriangleOfCharacter(height, character);
            printf("----------------------------\n"); // seperator for next Shape
            break;
        case 5:
            printf("Enter chracter for the square: ");
            scanf(" %c", &character);
            printf("Enter side of the square: ");
            scanf("%d", &side);

            printf("SQUARE\n\n");
            SquareOfCharacter(side, character);
            printf("----------------------------\n"); // seperator for next Shape
            break;
        case 6:
            printf("Exiting from program\n");
            return 0;

        default:
            printf("Invalid Number. Input from(1-6)\n");
        }
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
void SquareOfCharacter(int side, char fillCharacter)
{
    for (int row = 1; row <= side; row++)
    {
        for (int coloumn = 1; coloumn <= side; coloumn++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
void RightTriangleOfCharacter(int height, char fillCharacter)
{
    for (int rows = 1; rows <= height; rows++)
    {
        for (int i = 1; i <= rows; i++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
void InvertedRightTriangleOfCharacter(int height, char fillCharacter)
{
    for (int rows = height; rows >= 1; rows--)
    {
        for (int i = 1; i <= rows; i++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
void HollowRectangleOfCharacter(int side1, int side2, char fillCharacter)
{
    // side 1 = rows and side 2 = coloumns
    for (int row = 1; row <= side1; row++)
    {
        if (row == 1 || row == side1)
        { // prints upper and lower wall
            for (int bredth = 1; bredth <= side2; bredth++)
            {
                printf("%c", fillCharacter);
            }
            printf("\n");
        }
        else
        {
            printf("%c", fillCharacter);
            for (int gap = 1; gap <= side2 - 2; gap++)
            {
                printf(" ");
            }
            printf("%c\n", fillCharacter);
        }
    }
}
void printInfo(void)
{
    printf("Choose a number for Shape of your character: \n");
    printf("1- Hollow Rectangle\n");
    printf("2- Rectangle\n");
    printf("3- Right Triangle\n");
    printf("4- Inverted Right Triangle\n");
    printf("5- Square\n");
    printf("6- Exit\n");
}