#include <stdio.h>

int main()
{
    printf("Enter integer number(ASCII code) and check its corresposding character(-1 to exit)");
    int ascii;
    while (1)
    {
        printf("\n> "); // for input
        scanf("%d", &ascii); // inputs ascii code
        if (ascii == -1)
        {
            break;
        }
        printf("%c", ascii); // writes character of given ascii code
    }
    return 0;
}