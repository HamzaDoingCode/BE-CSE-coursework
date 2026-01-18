#include <stdio.h>
#define ROW 3
#define COLOUMN 3

int main()
{
    int i, j, k;
    int sum = 0;
    int matrix1[ROW][COLOUMN] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROW][COLOUMN] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrix3[ROW][COLOUMN] = {0};

    for (i = 0; i < ROW; i++)
    {
        for (k = 0; k < COLOUMN; k++) // Increment to next coloumn when all the rows and coloumns multiplied.
        {
            sum = 0;                  // Initialized sum to 0 before calculating element of the 3rd matrix
            for (j = 0; j < ROW; j++) // Increment to the next element of row of 1st matrix and coloumn of 2nd matrix
            {
                sum += matrix1[i][j] * matrix2[j][k];
            }
            matrix3[i][k] = sum; // stores elements of 3rd matrix
        }
    }
    printf("1ST MATRIX\n");
    printf("----------------------\n");
    for (i = 0; i < ROW; i++) // Prints 1st matrix
    {
        for (j = 0; j < COLOUMN; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n2ND MATRIX\n");
    printf("----------------------\n");
    for (i = 0; i < ROW; i++) // Prints 2nd matrix
    {
        for (j = 0; j < COLOUMN; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX MULTIPLICATION\n");
    printf("----------------------\n");

    for (i = 0; i < ROW; i++) // Prints 3rd matrix
    {
        for (j = 0; j < COLOUMN; j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}