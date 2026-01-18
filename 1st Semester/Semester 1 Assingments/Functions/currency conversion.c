#include <stdio.h>
double toYen(double);
double toEuro(double);
int main()
{
    double dollars, toYEN, toEURO;
    printf("Enter Dollar amount to convert into yen and euro (-1 to exit): \n");
    printf("DOLLARS\tYEN\t\tEURO\n");
    printf("------------------------------\n");
    while (1)
    {
        printf("> "); // simple input prompt
        scanf("%lf", &dollars);
        if (dollars == -1)
        {
            printf("Exiting from program\n");
            break;
        }
        else if (dollars >= 0)
        {
            toYEN = toYen(dollars);
            toEURO = toEuro(dollars);
            printf("%.3lf\t%.3lf\t%3lf\n", dollars, toYEN, toEURO);
        }
    }

    return 0;
}
double toYen(double dollar)
{
    double yen = 118.87;
    yen *= dollar;
    return yen;
}
double toEuro(double dollar)
{
    double euro = 0.92;
    euro *= dollar;
    return euro;
}
