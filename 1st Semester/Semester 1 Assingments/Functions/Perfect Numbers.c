#include <stdio.h>
void isPerfect(int);

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        isPerfect(i);
    }

    return 0;
}
void isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;                   // adds all factors of a number
        }
    }
    if (sum == num)
    {
        int digits = 0;
        printf("%d is a perfect integer\n", num);
        printf("Factors of %d are given as:\n", num);
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d\t", i);
            }
        }

        printf("\n");
        printf("-----------------------------\n"); // Indicates ending of a function.
    }
}