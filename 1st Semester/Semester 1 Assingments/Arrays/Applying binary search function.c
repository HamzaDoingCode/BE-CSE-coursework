// Fig. 6.19: fig06_19.c
// Binary search of a sorted array.

#include <stdio.h>
#define SIZE 15

// function prototypes
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

// function main begins program execution
int main(void)
{
    int a[SIZE]; // create array a

    // create data
    for (size_t i = 0; i < SIZE; ++i)
    {
        a[i] = 2 * i;
    }

    printf("%s", "Enter a number between 0 and 28: ");
    int key; // value to locate in array a
    scanf("%d", &key);

    printHeader();

    // search for key in array a
    size_t result = binarySearch(a, key, 0, SIZE - 1);

    // display results
    if (result != -1)
    {
        printf("\n%d found at index %zu\n", key, result);
    }
    else
    {
        printf("\n%d not found\n", key);
    }

    return 0;
}

// function to perform binary search of an array
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    if (low > high) // If key not found and low becomes greater than high, return -1
    {
        return -1;
    }
    size_t middle = (low + high) / 2; // calculates middle value on each recursive call

    printRow(b, low, middle, high); // prints current row on each recursive call
    if (searchKey == b[middle])
    {
        return middle; // base case
    }
    else
    {
        if (searchKey < b[middle])
        {
            high = middle - 1; // search low end of array OR search from left side of middle
        }
        else
        {
            low = middle + 1; // search high end of array OR search from right side of array
        }

        return binarySearch(b, searchKey, low, high);
    }
}

// Print a header for the output
void printHeader(void)
{
    puts("\nIndices:");

    // output column head
    for (unsigned int i = 0; i < SIZE; ++i)
    {
        printf("%3u ", i);
    }

    puts(""); // start new line of output

    // output line of - characters
    for (unsigned int i = 1; i <= 4 * SIZE; ++i)
    {
        printf("%s", "-");
    }

    puts(""); // start new line of output
}

// Print one row of output showing the current
// part of the array being processed.
void printRow(const int b[], size_t low, size_t mid, size_t high)
{
    // loop through entire array
    for (size_t i = 0; i < SIZE; ++i)
    {

        // display spaces if outside current subarray range
        if (i < low || i > high)
        {
            printf("%s", "    ");
        }
        else if (i == mid)
        {                         // display middle element
            printf("%3d*", b[i]); // mark middle value
        }
        else
        { // display other elements in subarray
            printf("%3d ", b[i]);
        }
    }

    puts(""); // start new line of output
}
