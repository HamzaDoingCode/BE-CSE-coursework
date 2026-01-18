#include <stdio.h>
#include <math.h>
int main(void)
{

    int account_number;
    long mortgage_amount;
    int term;
    float interest_rate;
    while (1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);
        if (account_number != (-1))
        {
            printf("Enter mortgage amount: ");
            scanf("%ld", &mortgage_amount);
            printf("Enter mortgage term (in years): ");
            scanf("%d", &term);
            printf("Enter interest rate (as a decimal): ");
            scanf("%f", &interest_rate);

            long total_interest = mortgage_amount * term * interest_rate;
            long total_amount_payable = total_interest + mortgage_amount;
            int monthly_payment = total_amount_payable / (term * 12);
            printf("The monthly payable interest $: %d\n", (int)round(monthly_payment));
        }
        else
            return 0;
    }
}
