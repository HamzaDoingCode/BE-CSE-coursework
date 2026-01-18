#include <stdio.h>
#include <math.h>

int main()
{
    printf("Square root of 9 is %.2f\n", sqrt(9));
    printf("Cube root of 27 is %.2f\n", cbrt(27));
    printf("exp^1 is %.2f\n", exp(1));
    printf("natural logarithm of 2.718282 (base e) is %.2f\n", log(2.718282));
    printf("logarithm of 1 (base 10) is %.2f\n", log10(1));
    printf("absolute value of -13.2 is %.2f\n", fabs(-13.2));
    printf("Rounds of 9.2 to the smallest integer not less than 9.2 is %.2f\n", ceil(9.2));
    printf("Rounds of 9.2 to the smallest integer not greater than 9.2 is %.2f\n", floor(9.2));
    printf("2 raised to the power 3 is %.2f\n", pow(2, 3));
    printf("trigonometric sine of 0 (0 in radians) is %.2f\n", sin(0));
    printf("trigonometric cos of 0 (0 in radians) is %.2f\n", cos(0));
    printf("trigonometric tan of 0 (0 in radians) is %.2f\n", tan(0));

    return 0;
}