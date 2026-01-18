#include <stdio.h>
#include <math.h>
void roots(float, float, float);
int main()
{
    float a, b, c;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter coefficients of the quadratic equation(ax^2 +bx + c): \n");
        printf("> "); // simple input prompt
        scanf("%f %f %f", &a, &b, &c);
        roots(a, b, c);
    }

    return 0;
}
void roots(float a, float b, float c)
{
    float descriminant;
    float root1;
    float root2;
    descriminant = (b * b) - (4 * a * c);
    if (descriminant >= 0)
    {
        printf("Roots of the given equation are real\n");
        root1 = (-b + (pow(descriminant, 0.5))) / (2 * a);
        root2 = (-b - (pow(descriminant, 0.5))) / (2 * a);
        printf("Roots of the given equation are: %.2f and %.2f\n", root1, root2);
    }
    else
    {
        printf("Roots of the given equation are imaginary\n");
    }
    printf("-----------------------------\n"); // Indicates ending of a function.
}
