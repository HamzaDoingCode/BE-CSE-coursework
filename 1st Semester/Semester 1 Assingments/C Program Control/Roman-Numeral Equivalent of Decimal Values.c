#include <stdio.h>

int main()
{
    printf("DECIMAL\tROMAN\n");
    printf("------------------\n");
    int tens, n, ones;
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t",i);
        tens = i / 10;
        ones = i % 10;

        // tens place
        if (tens == 1)
            printf("X");
        else if (tens == 2)
            printf("XX");
        else if (tens == 3)
            printf("XXX");
        else if (tens == 4)
            printf("XL");
        else if (tens == 5)
            printf("L");
        else if (tens == 6)
            printf("LX");
        else if (tens == 7)
            printf("LXX");
        else if (tens == 8)
            printf("LXXX");
        else if (tens == 9)
            printf("XC");
        else if (tens == 10)
            printf("C");

        // ones place
        if (ones == 1)
            printf("I");
        else if (ones == 2)
            printf("II");
        else if (ones == 3)
            printf("III");
        else if (ones == 4)
            printf("IV");
        else if (ones == 5)
            printf("V");
        else if (ones == 6)
            printf("VI");
        else if (ones == 7)
            printf("VII");
        else if (ones == 8)
            printf("VIII");
        else if (ones == 9)
            printf("IX");

        printf("\n");
    }

    return 0;
}