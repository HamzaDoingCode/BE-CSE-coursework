#include <stdio.h>
int main()
{
    int salary_per_week = 200;
    float sales;
    float total_salaray;
    while (1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales != -1)
        {
            total_salaray = salary_per_week + sales * 0.09;
            printf("Salary is: $%.2f\n", total_salaray);
        }
        else
            return 0;
    }
}