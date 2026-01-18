#include <stdio.h>
#define SIZE 10
int recursiveMinimum(int[], int);

int main()
{
    int minimum;
    int arr[SIZE] = {6, 2, 15, 4, 5, 54, 1, 8, 9, 10};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------------------------------\n");

    minimum = recursiveMinimum(arr, SIZE);
    printf("Minimum: %d", minimum);

    return 0;
}

int recursiveMinimum(int arr[], int size)
{
    int currentValue;
    if (size == 1)
    {
        return arr[size - 1]; // Base case, when there is only one element in the array then obviously it is smallest
    }
    else
    {
        currentValue = recursiveMinimum(arr, size - 1); // holds the returned value
        if (arr[size - 1] < currentValue)               // compares returned value with array's previous index value
        {
            return arr[size - 1];
        }
        else
        {
            return currentValue;
        }
    }
}
