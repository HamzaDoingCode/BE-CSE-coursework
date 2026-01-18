#include <stdio.h>
#include <conio.h>
int main(void)
{
    float country_tax_rate = 0.05, state_tax_rate = 0.04;

    long total_amount;
    float total_collection, sales_amount, country_tax, state_tax, total_tax;
    while (1)
    {
        printf("Enter total amount collected (-1 to quit): \n");
        scanf("%ld", &total_amount);
        if (total_amount != (-1))
        {
            char a, b, c;
            printf("Enter month(First three letters): \n");
            getche();
            getche();
            getche();
            getche();

            sales_amount = total_amount / (1 + country_tax_rate + state_tax_rate);
            country_tax = sales_amount * country_tax_rate;
            state_tax = sales_amount * state_tax_rate;
            total_tax = sales_amount * country_tax_rate + sales_amount * state_tax_rate;

            printf("\nTotal collection : $%.2f\n", (double)total_amount);
            printf("Sales: $%.2f\n", sales_amount);
            printf("Country Sales Tax: $%.2f\n", country_tax);
            printf("State Sales Tax: $%.2f\n", state_tax);
            printf("Total Sales Tax Collected: $%.2f\n", total_tax);
        }
        else
            return 0;
    }

}
/* Miss, We dont know how to take an input of a string that is why I use getche for month.*/
