#include <stdio.h>
int main()
{
    int a;
    int prime = 1;
    printf("Enter a number to check whether it is a prime or not: ");
    scanf("%d", &a);
    if (a > 1)
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    else
    {
        printf("Entered number is not suitable");
        return 0;
    }

    if (prime == 1 || a == 2)
        printf("%d is a prime number\n", a);
    else if (prime == 0)
        printf("%d is not a prime number\n", a);
}
