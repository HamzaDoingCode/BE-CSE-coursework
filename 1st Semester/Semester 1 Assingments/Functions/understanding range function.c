#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Initialize random seed once
    int range;
    for (int i = 1; i <= 5; i++)
    {
        range = 1 + rand() % 6; // rand() % 6 generates number from 0 to 5. adding 1 in it so it can generate number from 1 to 6
        printf("%d\n", range);
    }

    return 0;
}