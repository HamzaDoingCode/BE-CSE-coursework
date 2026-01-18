#include <stdio.h>

int main()
{
    printf("DECIMAL\tBINARY\t\tOCTAL\tHEXADECIMAL\n");
    printf("-----------------------------------------\n");
    for (int i = 1; i <= 256; i++)
    {
        printf("%d\t", i); // prints decimal
        // Print binary representation
        if (i <= 255)
        {
            // 8-bit binary for numbers 1-255
            for (int j = 7; j >= 0; j--)
            {
                printf("%d", (i >> j) & 1);
            }
        }
        else
        {
            // 9-bit binary for 256
            printf("100000000");
        }
        printf("\t");
        printf("%o\t", i); // prints octal equivalent
        printf("%x\n", i);   // prints hexadecimal equivalent
    }

    return 0;
}