#include <stdio.h>
double areaofTriangle(void);

int main()
{
    double area;
    for (int i = 1; i <= 3; i++)
    {
        area = areaofTriangle();
        if (area == 0.00)
        {
            i--;
        }
        printf("Area: %.2lf\n", area);
        printf("----------------------------------\n");
    }

    return 0;
}
double areaofTriangle(void)
{
    double height, base, hypotenuse;
    printf("Enter sides of a triangle(base, height, and hypotenuse): ");
    scanf("%lf %lf %lf", &base, &height, &hypotenuse);
    double area;
    if (height + base > hypotenuse && hypotenuse + base > height && hypotenuse + height > base) // Checks whether sum of two sides is greater than the third side
    {
        printf("%.2lf,%.2lf,%.2lf are the sides of a triangle and its area is given as: \n", height, base, hypotenuse);
        area = 0.5 * base * height;
        return area;
    }
    else
    {
        printf("%.2lf,%.2lf,%.2lf are not the sides of a triangle\n", height, base, hypotenuse);
        return 0.00;
    }
}