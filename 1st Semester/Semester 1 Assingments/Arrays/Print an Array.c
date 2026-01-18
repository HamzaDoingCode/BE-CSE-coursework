#include <stdio.h>
void printArray(int[], int);
#define SIZE 10

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr, SIZE-1);

    return 0;
}
void printArray(int arr[], int sizeOfarr)
{
    if (sizeOfarr == 0) // base case
    {
        printf("%d\t", arr[sizeOfarr]);
        return; // stops further calling
    }
    else
    {
        printArray(arr, sizeOfarr-1);
        printf("%d\t", arr[sizeOfarr]);
    }
}