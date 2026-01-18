#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three values to check whether they could be sides of a triangle(values must be in ascending order): \n");
    scanf("%d %d %d", &x, &y, &z);
    if (x + y > z && z + x > y && z + y > x)
    {
        if (z * z == x * x + y * y)
            printf("%d, %d and %d could represent the sides of a right angle triangle", x, y, z);

        else
            printf("%d, %d and %d could not represent the sides of a right angle triangle", x, y, z);
    }
}