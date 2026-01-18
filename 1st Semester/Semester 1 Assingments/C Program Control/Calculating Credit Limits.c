#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        long CustomerAccountNumber, CustomerCreditLimit, CustomerCurrentBalance, NewCreditLimit;
        printf("Enter Account Number: ");
        scanf("%ld", &CustomerAccountNumber);
        printf("Enter credit limit(in $): ");
        scanf("%ld", &CustomerCreditLimit);
        printf("Enter Current Balance(in $): ");
        scanf("%ld", &CustomerCurrentBalance);

        NewCreditLimit = CustomerCreditLimit / 2;

        
        printf("\n\nCustomer's Account Number: %ld\n", CustomerAccountNumber);
        printf("Customer's old credit limit: %ld$\n", CustomerCreditLimit);
        printf("Customer's new credit limit: %ld\n", NewCreditLimit);
        printf("Customer's current balance: %ld$\n", CustomerCurrentBalance);
        if (CustomerCurrentBalance > NewCreditLimit)
        {
            printf("Credit limit exceeds\n");
        }
        else
            printf("Within Credit limit\n");

        printf("\n____________________________\n");
    }

    return 0;
}