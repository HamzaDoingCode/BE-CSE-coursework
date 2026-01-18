#include <stdio.h>
#include <math.h>

int main()
{
    printf("Keeps entering a number for rounding it to nearest integer(0 to exit): \n");
    printf("Number\tRounded Number\n");
    while (1)
    {
        float number;
        scanf("%f", &number); // reads number
        if (number == 0)
        {
            break;
        }
        else
        {

            printf("%.2f\t%.2f\n",number,ceil(number + 0.5));
        }
    }

    return 0;
}