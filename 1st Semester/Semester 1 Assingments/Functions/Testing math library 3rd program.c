#include <stdio.h>
#include <math.h>
int main()
{
    double result;
    printf("x\tsqrt(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = sqrt(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tcbrt(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = cbrt(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\texp(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = exp(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tlog(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = log(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tlog10(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = log10(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tfabs(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = fabs(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tceil(x)\n");
    for (float i = 1.3; i <= 5; i++)
    {
        result = ceil(i);
        printf("%.2f\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tfloor(x)\n");
    for (float i = 1.3; i <= 5; i++)
    {
        result = floor(i);
        printf("%.2f\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tpow(x,2)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = pow(i,2);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tfmod(x,1.2)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = fmod(i,1.2);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tsin(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = sin(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\tcos(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = cos(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function
    printf("x\ttan(x)\n");
    for (int i = 1; i <= 5; i++)
    {
        result = tan(i);
        printf("%d\t%.2lf\n", i, result);
    }
    printf("----------------\n"); // seperator for next function

    return 0;
}