#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int x, y, GCD;
    printf("Enter Two number to check their GCD\n");
    printf("> ");
    scanf("%d %d", &x, &y);
    GCD = gcd(x, y);
    printf("The greatest common divisor of %d and %d is %d", x, y, GCD);

    return 0;
}
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        gcd(y, x % y);
    }
}