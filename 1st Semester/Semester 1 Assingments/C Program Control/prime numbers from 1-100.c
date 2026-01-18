#include <stdio.h>
int main()
{
    int number = 2;
    while (number != 100)
    {
        int prime = 1;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d\n", number);
        }
        number++;
    }
}