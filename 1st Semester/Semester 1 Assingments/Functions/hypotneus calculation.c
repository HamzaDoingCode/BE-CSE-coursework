#include <stdio.h>
#include <math.h>
double hypo(double, double);

int main()
{
    double base, height, hypotenuse;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter side 1 and side 2: \n");
        scanf("%lf %lf", &base, &height);
        hypotenuse = hypo(base, height);
        printf("Side 1|Side 2|Hypotenuse\n");
        printf("%.2lf |%.2lf |%.2lf\n", height, base, hypotenuse);
        printf("-----------------------------------\n");
    }

    return 0;
}
double hypo(double base, double height)
{
    double hypotenuse;
    hypotenuse = pow((base * base + height * height), 0.5);
    return hypotenuse;
}