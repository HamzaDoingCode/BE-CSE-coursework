#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5;i++)
    {
        int numberForBar;
        printf("Enter a number for lenghth of bar(from 1-30): ");
        scanf("%d", &numberForBar);
        if (numberForBar >= 1 && numberForBar <= 30)
        {
            printf("Number: %d\n", numberForBar);
            printf("Bar of astericks: ");
            for (int astericks = 1; astericks <= numberForBar; astericks++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("Enter a valid number\n");
            i--;
        }
    }

    return 0;
}