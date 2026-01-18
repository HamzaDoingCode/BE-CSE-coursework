// Counting letter grades with if-else.
#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade; // one grade

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF)
    {
        if (grade == 'A' || grade == 'a')
        {
            ++aCount;
        }

        if (grade == 'B' || grade == 'b')
        {
            ++bCount;
        }

        if (grade == 'C' || grade == 'c')
        {
            ++cCount;
        }

        if (grade == 'D' || grade == 'd')
        {
            ++dCount;
        }

        if (grade == 'F' || grade == 'f')
        {
            ++fCount;
        }

        if (grade == '\n' || grade == '\t' || grade == ' ')
            continue; // ignore newlines, tabs, and spaces in input

        if ((grade != 'A' && grade != 'a') && (grade != 'B' && grade != 'b') && (grade != 'C' && grade != 'c') && (grade != 'D' && grade != 'd') && (grade != 'F' && grade != 'f') && (grade != '\n' && grade != '\t' && grade != ' '))
        { // catch all other characters
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            continue;
        } // end if-else
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);

    return 0;
}