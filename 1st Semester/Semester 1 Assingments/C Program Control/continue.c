// Using the continue statement in a for statement.
#include <stdio.h>

int main(void)
{
    int flag;
    // loop 10 times
    for (unsigned int x = 1; x <= 10; ++x)
    {

        flag = 1;
        // if x is 5, continue with next iteration of loop
        if (x == 5)
        {
            flag = 0; // skip remaining code in loop body
        }

        if (flag == 1)
        {
            printf("%u ", x);
        }
    }
}