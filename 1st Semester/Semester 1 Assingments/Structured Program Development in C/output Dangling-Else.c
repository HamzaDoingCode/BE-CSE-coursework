#include <stdio.h>
int main()
{
    int x = 11, y = 9;
    if (x < 10)
        if (y > 10)
            puts("*****");
        else
            puts("#####");
    puts("$$$$$");
}