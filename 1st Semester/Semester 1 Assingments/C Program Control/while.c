#include <stdio.h>

int main(void)
{
    int flag = 1;
    unsigned int x; // declared here so it can be used after loop

    // loop 10 times
    for (x = 1; x <= 10 && flag == 1; x++)
    {

        // if x is 5, terminate loop
        if (x == 5)
        {
            flag = 0; // break loop only if x is 5
        }
        else
            printf("%u ", x);
    }

    printf("\nBroke out of loop at x == %u\n", --x); // prints x by subtracting one from it, since one added in it while exiting from the loop.
}