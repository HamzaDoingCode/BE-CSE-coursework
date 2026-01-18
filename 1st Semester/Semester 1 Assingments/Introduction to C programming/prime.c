#include <stdio.h>
int main()
{
    int a, prime;
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter an integer to check prime or not: ");
        scanf("%d", &a);
        if (a == 2)
            prime = 1;
        else if(a<=1)
            prime = 0;
        else
        {
            prime = 1;
            for(int i = 2; i < a; i++)
            {
                if (a % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime == 1)
        {
            printf("%d is a prime number\n", a);
        }
        else if(prime == 0)
        {
            printf("%d is not a prime number\n",a);
        }
    }

    return 0;
}