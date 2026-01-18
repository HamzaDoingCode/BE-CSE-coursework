#include <stdio.h>
#define SIZE 100

// function prototype
size_t linearSearch(const int array[], int key, size_t size);

int main(void)
{
    int a[SIZE]; // create array a

    // create some data
    for (size_t x = 0; x < SIZE; ++x)
    {
        a[x] = 2 * x;
    }

    printf("Enter integer search key: ");
    int searchKey; // value to locate in array a
    scanf("%d", &searchKey);

    // attempt to locate searchKey in array a
    size_t index = linearSearch(a, searchKey, SIZE);

    // display results
    if (index != -1)
    {
        printf("Found value at index %zu\n", index);
    }
    else
    {
        puts("Value not found");
    }

    return 0;
}

// compare key to every element of array until the location is found
// or until the end of array is reached; return index of element
// if key is found or -1 if key is not found
size_t linearSearch(const int array[], int key, size_t size)
{
    static int index = 0;
    if (index >= size) // If index reaches size, value not found
    {
        return -1;
    }
    if (array[index] == key)
    {
        return index; // base case
    }
    else
    {
        index++;
        return linearSearch(array, key, size); // recursive case
    }
}