#include <stdio.h>

int main()
{
    printf("Enter -1 to exit\n");
    int counters[9] = {0};
    int salesperson = 1;
    int grossSales;
    int total;
    while (1)
    {
        total = 0, grossSales = 0;
        printf("Enter gross sales of salesperson %d\n> ", salesperson);
        scanf("%d", &grossSales);
        if (grossSales == -1)
        {
            break;
        }
        else
        {
            salesperson++;
            total = (float)0.09 * grossSales + 200;
            total = (int)total;
            if (total >= 200 && total < 300)
            {
                counters[0]++;
            }
            else if (total >= 300 && total < 400)
            {
                counters[1]++;
            }
            else if (total >= 400 && total < 500)
            {
                counters[2]++;
            }
            else if (total >= 500 && total < 600)
            {
                counters[3]++;
            }
            else if (total >= 600 && total < 700)
            {
                counters[4]++;
            }
            else if (total >= 700 && total < 800)
            {
                counters[5]++;
            }
            else if (total >= 800 && total < 900)
            {
                counters[6]++;
            }
            else if (total >= 900 && total < 1000)
            {
                counters[7]++;
            }
            else if (total > 1000)

            {
                counters[8]++;
            }
        }
    }
    printf("Range\t\tSalesperson\n");
    for (int i = 0; i < 9; i++)
    {
        if (i == 8)
        {
            printf("%d00 and more\t ", (2 + i)); // prints range of the price
            printf("%d\n", counters[i]);          // prints total salesperson in the range
        }
        else
        {
            printf("%d00 - %d99\t ", (2 + i), (2 + i)); // prints range of the price
            printf("%d\n", counters[i]);                 // prints total salesperson in the range
        }
    }

    return 0;
}