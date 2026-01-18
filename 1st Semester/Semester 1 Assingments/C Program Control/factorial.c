#include <stdio.h>
int main()
{
    printf("Numbers\tFactorials\n");
    for (int i = 1; i <= 20; i++) // calculate factorial from 1 to 5
    {
        printf("%d\t", i); // prints number for factorial
        int fact = 1;
        for (int j = i; j >= 1; j--) // calculates factorial by subtracting 1 on each iteration
        {
            fact *= j;
        }
        printf("%d\n", fact);// prints factorial of a number

    }
}