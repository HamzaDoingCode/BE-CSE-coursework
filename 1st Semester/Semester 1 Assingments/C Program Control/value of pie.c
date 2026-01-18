#include <stdio.h>

int main()
{
    int numberOfTerms;
    double pieValue = 0.0;
    printf("TERMS\t|PIE VALUES\n");
    int term = 0;
    while (term < 1000)
    {
        double denominator = (term * 2) + 1;
        double currentTerm = 4.0 / denominator;
        if (term % 2 != 0) // when term is odd then next term will be add with - sign
        {
            pieValue = pieValue - currentTerm;
        }
        else // when term is even then next term will be add with + sign
        {
            pieValue = pieValue + currentTerm;
        }
        printf("%d\t|%lf\n", term, pieValue);
        if (pieValue > 3.14 - 0.00001 && pieValue < 3.14 + 0.00001)
            printf("Reached π ≈ 3.14 at term %d\n", term + 1);

        else if (pieValue > 3.141 - 0.00001 && pieValue < 3.141 + 0.00001)
            printf("Reached π ≈ 3.141 at term %d\n", term + 1);

        else if (pieValue > 3.1415 - 0.00001 && pieValue < 3.1415 + 0.00001)
            printf("Reached π ≈ 3.1415 at term %d\n", term + 1);

        else if (pieValue > 3.14159 - 0.00001 && pieValue < 3.14159 + 0.00001)
        {
            printf("Reached π ≈ 3.14159 at term %d\n", term + 1);
            break;
        }
        term++;
    }

    return 0;
}