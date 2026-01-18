#include <stdio.h>

int main()
{
    int smallestIndex, i, j, k, temp;
    int array[10] = {3, 1, 4, 56, 32, 45, 9, 5, 2, 72};
    printf("UNSORTED ARRAY\n");
    for (int l = 0; l < 10; l++)
    {
        printf("%d\n", array[l]);
    }

    for (i = 0; i < 10; i++)
    {
        smallestIndex = i;
        for (j = i + 1; j < 10; j++)
        {
            if (array[j] < array[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        temp = array[i];
        array[i] = array[smallestIndex];
        array[smallestIndex] = temp;
    }
    printf("------\nSORTED ARRAY\n");
    for (k = 0; k < 10; k++) // for printing the sorted loop.
    {
        printf("%d\n", array[k]);
    }

    return 0;
}