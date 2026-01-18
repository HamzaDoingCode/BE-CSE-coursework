#include <stdio.h>
int main()
{
    int terms;
    printf("Enter number of terms for the sum, sum of sqaures, and sum of cubes: ");
    scanf("%d", &terms);
    long sum = 0, sumSqr = 0, sumCube = 0;
    for (int number = 1; number <= terms; number++)
    {
        sum += number;
        sumSqr += (number * number);
        sumCube += (number * number * number);
    }
    printf("The sum of natural numbers from 1 to %d is: %ld\n", terms, sum);
    printf("The sum of square of natural numbers from 1 to %d is: %ld\n", terms, sumSqr);
    printf("The sum of cube of natural numbers from 1 to %d is: %ld\n", terms, sumCube);
}
