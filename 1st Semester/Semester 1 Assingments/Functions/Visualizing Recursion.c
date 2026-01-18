// Fig. 5.18: fig05_18.c
// Recursive factorial function.

#include <stdio.h>

// Function prototype
unsigned long long int factorial(unsigned int number);

int main(void)
{
    // during each iteration, calculate factorial(i) and display result
    for (unsigned int i = 0; i <= 21; ++i)
    {
        printf("\nCalculating %u!:\n", i);
        printf("%u! = %llu\n", i, factorial(i));
        printf("------\n"); // seperator for next number
    }

    return 0;
}

// recursive definition of function factorial
unsigned long long int factorial(unsigned int number)
{
    static int gap = 0;
    for (int i = 0; i < gap; i++)
    {
        printf("  ");
    }
    printf("Entering into factorial(%d)\n", number);
    if (number <= 1)
    {
        for (int i = 0; i < gap; i++)
        {
            printf("  ");
        }
        
        printf("Returning factorial(%d) the base case\n", number);
        return 1;
    }
    else
    {
        gap++;
        unsigned long long int result = number * factorial(number - 1); // every recursive call, store in a seperate result
        gap--;
        for (int i = 0; i < gap; i++)
        {
            printf("  ");
        }

        printf("Returning %u * factorial(%u) = %llu\n", number, number - 1, result);
        return result;
    }
}
