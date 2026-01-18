#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int flip(void);
int main()
{
    int result, head = 0, tail = 0, i = 1;
    srand(time(0)); // seed once
    for (i = 1; i <= 100; i++)
    {
        result = flip();
        if (result == 0)
        {
            tail++;
            printf("Tails\n");
        }
        else
        {
            printf("Heads\n");
            head++;
        }
    }
    printf("Total number of heads are: %d\n", head);
    printf("Total number of tails are: %d\n", tail);

    return 0;
}

int flip(void)
{
    int result = rand() % 2;
    return result;
}