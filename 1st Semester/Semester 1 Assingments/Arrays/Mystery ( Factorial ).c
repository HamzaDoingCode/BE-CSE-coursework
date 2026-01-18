#include <stdio.h>
#define SIZE 6

int whatIsThis(const int b[], size_t p); // function prototype

int main(void)
{
    int x;
    int a[SIZE] = {1, 2, 3, 4, 5, 6};
    x = whatIsThis(a, SIZE);
    printf("Result is %d\n", x);
}

int whatIsThis(const int b[], size_t p)
{
    if (1 == p) { // base case
        return b[0];
    }
    else { // recursion step
        return b[p - 1] * whatIsThis(b, p - 1);
    }
}
