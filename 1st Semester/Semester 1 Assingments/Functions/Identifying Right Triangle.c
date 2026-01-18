#include <stdio.h>
#include <math.h>

int rightAngleTriangle(int, int, int);
void main()
{
    int base, height, hypotenuse;
    int condition;
    while (1)
    {
        printf("1(true) indicates sides are of Right angle Triangle and 0(false) indicates sides are not of Right angle Triangle\n");
        printf("Enter sides of a Right Angle Triangle(base, height, and hypotenuse)(-1 to exit): ");
        scanf("%d %d %d", &base, &height, &hypotenuse);
        if (base == -1 || height == -1 || hypotenuse == -1)
        {
            printf("Exiting from the program\n");
            break;
        }
        else
        {
            condition = rightAngleTriangle(base, height, hypotenuse);
            printf("%d\n", condition);
        }
        printf("-----------------------------------------------------------------------------------\n"); // line seperator for next triangle
    }
}
int rightAngleTriangle(int base, int height, int hypotenuse)
{
    if (pow(hypotenuse, 2) == pow(base, 2) + pow(height, 2)) // checks whether sides form pythagoras theorem or not
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
