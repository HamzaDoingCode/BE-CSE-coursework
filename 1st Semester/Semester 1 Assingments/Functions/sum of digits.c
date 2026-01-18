#include <stdio.h>
int sumOfDigits(int);
int main()
{
    printf("Enter an integer to check sum of its digits(0 to exit)\n");
    int integer, result;
    while (1)
    {
        printf("> "); // simple input prompt
        scanf("%d", &integer);
        if (integer == 0)
        {
            printf("Exiting from program\n");
            break;
        }
        else
        {
            result = sumOfDigits(integer);
            printf("The sum of digits of %d is %d\n", integer, result);
        }
    }

    return 0;
}
int sumOfDigits(int num)
{
    int remainder; // For calculating digits of a number
    int sum = 0;
    while (num != 0) // loop goes until number becomes 0
    {
        remainder = num % 10; // calculates digits of a number
        sum += remainder;     // succesively add digits
        num = num / 10;       // number is reduced to its previous digit at each iteration
    }
    return sum;
}