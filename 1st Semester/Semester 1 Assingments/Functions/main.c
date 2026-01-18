#include <stdio.h>
#include <math.h>

int mystery(unsigned int a, int b); // function prototype

int main(void)
{
    printf("%s", "Enter two positive integers: ");
    unsigned int x; // first integer
    int y; // second integer
    scanf("%u%d", &x, &y);
    if (y < 0)
    {
        printf("The result is -%u\n", mystery(x, y));
    }
    else
    {
        printf("The result is %u\n", mystery(x, y));
    }
}

int mystery(unsigned int a, int b)
{
    b = abs(b); // converts negative into positive
    // base case
    if (b == 0)
    {
        return 0;
    }
    else if (b == 1)
    {
        return a;
    }
    
    else
    { // recursive step
        return a + mystery(a, b - 1);
    }
}
