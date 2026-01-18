#include <stdio.h>
#include <math.h>
float RoundToInteger(float);
float RoundToTenths(float);
float RoundToHundreths(float);
float RoundToThousandths(float);

int main()
{
    while (1)
    {
        float x, integer, tenths, hundreths, thousandths;
        printf("Enter a number for rounding(-1 to exit): ");
        scanf("%f", &x);
        if (x == -1)
        {
            break;
        }
        else
        {

            printf("x\tRound to Integer\tRound to Tenths\tRound to Hundreths\tRound to Thousandths\n");
            integer = RoundToInteger(x);
            tenths = RoundToTenths(x);
            hundreths = RoundToHundreths(x);
            thousandths = RoundToThousandths(x);
            printf("%.4f\t\t%.4f \t\t%.4f \t\t%.4f \t\t\t%.4f\n", x, integer, tenths, hundreths, thousandths);
            printf("---------------------------------------------------------------------\n");
        }
    }

    return 0;
}
float RoundToInteger(float num)
{
    float rounded;
    rounded = floor(num + 0.5); // Rounds a number into an integer.
    return rounded;
}
float RoundToTenths(float num)
{
    float rounded;
    rounded = floor(num * 10 + 0.5) / 10; // Rounds a number to tenths.
    return rounded;
}
float RoundToHundreths(float num)
{
    float rounded;
    rounded = floor(num * 100 + 0.5) / 100; // Rounds a number to hundredths.
    return rounded;
}
float RoundToThousandths(float num)
{
    float rounded;
    rounded = floor(num * 1000 + 0.5) / 1000; // Rounds a number to thousandths.
    return rounded;
}