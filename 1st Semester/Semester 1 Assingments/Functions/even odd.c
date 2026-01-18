#include <stdio.h>
int isEven(int);

int main()
{
    printf("1(true) indicates that given integer is even and 0(false) indicates that given integer is odd\n");
    int integer, condition;
    while (1)
    {
        printf("Enter an integer to check whether it is even or not(-1 to exit): ");
        scanf("%d", &integer);
        if (integer == -1)
        {
            printf("Exiting from program");
            break;
        }

        condition = isEven(integer);
        printf("%d\n", condition);
        printf("---------------------------------\n"); // line seperator for next integer
    }

    return 0;
}
int isEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
