#include <stdio.h>
int main()
{
    float principal, days;
    float rate, charge;
    while (1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
        if (principal != -1)
        {
            printf("Enter interest rate: ");
            scanf("%f", &rate);
            printf("Enter term of the loan in days: ");
            scanf("%f", &days);
            charge = principal * rate * (days / 365);
            printf("The interest charge is: $%.2f\n\n", charge);
        }
        else
            return 0;
    }
}