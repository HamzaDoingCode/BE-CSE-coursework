#include <stdio.h>
long power(int, int);

int main()
{
    long result = power(2,8);
    printf("%ld",result);
    return 0;
}
long power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base; 
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}