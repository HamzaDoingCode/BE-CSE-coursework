#include <stdio.h>

int main()
{
    while (1)
    {
        int employeePaycode;
        printf("Enter your paycode(-1 to exit): "); // asks user about the paycode
        scanf("%d", &employeePaycode);
        if (employeePaycode == -1)
        {
            return 0; // exits from the program
        }
        else
        {

            switch (employeePaycode)
            {
            case 1:
                double fixedSalaryOfManager = 0; // initialized it to 0 because when different user come its salary might be different.
                printf("Welcome! Manager\n");
                printf("Enter your fixed weekly salary: "); // asks manager about his salary
                scanf("%lf", &fixedSalaryOfManager);
                printf("You have recieved %.2lf$ from the company as a salary of this week.\n", fixedSalaryOfManager); // prints fixed salary
                break;
            case 2:
                double FixedHourlyWage = 0;
                int hours = 0;
                printf("Welcome! hourly worker\n");
                printf("Enter your fixed hourly wage: "); // asks hourly manager about his hourly wage
                scanf("%lf", &FixedHourlyWage);
                printf("Enter amount of hours you have worked this week: ");
                scanf("%d", &hours);
                if (hours >= 1 && hours <= 40)
                {
                    printf("You have recieved %.2lf$ from the company as a salary of this week.\n", hours *FixedHourlyWage); // If hours are between 1-40 then prints exact salary
                }
                else if (hours > 40)
                {
                    hours = hours - 40;                                       // Calculates Extra hours
                    double extraHourlyWage = 0;
                    extraHourlyWage = (float)(FixedHourlyWage * hours * 1.5); // Calculates 1.5 times of user's extra hours
                    printf("You have recieved %.2lf$ from the company as a salary of this week.\n", FixedHourlyWage*40 + extraHourlyWage);
                }
                break;
            case 3:
                double GrossSalaryOfCommisionWorker = 0;
                printf("Welcome! Comission worker\n");
                printf("Enter Your Gross Weekly sales: ");
                scanf("%lf", &GrossSalaryOfCommisionWorker);
                GrossSalaryOfCommisionWorker = (float)(GrossSalaryOfCommisionWorker * 5.7) / 100;                                // calculates 5.7% of gross weekly sales
                printf("You have recieved %.2lf$ from the company as a salary of this week.\n", GrossSalaryOfCommisionWorker + 250); // give 250$ with 5.7% of gross salary
                break;
            case 4:
                double SalaryForPieceWorker = 0;
                int item = 0, Book1 = 25, Book2 = 28, Book3 = 30; /* book1, book2, and book3 are three different items
                   with different prices, which each pieace worker produce.*/
                printf("Welcome! pieceworker\n");
                printf("What is your book number? "); // asks user about his book number.
                scanf("%d", &item);
                switch (item)
                {
                    int quantity = 0;
                case 1:
                    printf("Enter number of book 1 you has made this week: ");
                    scanf("%d", &quantity);
                    printf("You have recieved %.2lf$ from the company as a salary of this week.\n",(float)Book1 * quantity);
                    break;
                case 2:
                    printf("Enter number of book 2 you has made this week: ");
                    scanf("%d", &quantity);
                    printf("You have recieved %.2lf$ from the company as a salary of this week.\n",(float)Book2 * quantity);
                    break;
                case 3:
                    printf("Enter number of book 3 you has made this week: ");
                    scanf("%d", &quantity);
                    printf("You have recieved %.2lf$ from the company as a salary of this week.\n",(float)Book3 * quantity);
                    break;

                default:
                    printf("Enter a valid book number(1-3)\n");
                    break;
                }

                break;

            default:
                printf("Enter a valid paycode(1-4)");
                break;
            }
            printf("\n -------------------------------------------\n"); // New iteration is for next user.
        }
    }
    return 0;
}