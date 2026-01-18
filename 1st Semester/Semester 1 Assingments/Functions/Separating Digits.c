#include <stdio.h>
void integerseperation(int);

int main()
{
    int quotient;
    int remainder;
    int number;
    quotient = 14 / 7;
    remainder = 14 % 7;
    printf("Quotient when 14 divided by 7: %d\n", quotient); // a
    printf("Reminder when 14 divided by 7: %d\n", remainder); // b
    printf("---------------------------------------\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter a digit between(1 to 32767): ");
        scanf("%d", &number);
        if (number >= 1 && number <= 32767)
        {
            integerseperation(number);
        }
        else
        {
            printf("Enter another number\n");
            i--;
        }
    }

    return 0;
}
void integerseperation(int num) // function program from pieces developed in a and b
{
    int firstDigit, SecondDigit, ThirdDigit, FourthDigit, fifthDigit;
    if (num >= 1 && num <= 9)
    {
        firstDigit = num;
        printf("%d", firstDigit);
    }

    else if (num > 9 && num <= 99)
    {
        firstDigit = (num / 10) % 10; // calculates first digit
        SecondDigit = num % 10;       // calculates second digit
        printf("%d  %d\n", firstDigit, SecondDigit);
    }
    else if (num > 99 && num <= 999)
    {
        firstDigit = ((num / 10) / 10) % 10; // calculates first digit
        SecondDigit = (num / 10) % 10;       // calculates first digit
        ThirdDigit = num % 10;               // calculates second digit
        printf("%d  %d  %d\n", firstDigit, SecondDigit, ThirdDigit);
    }
    else if (num > 999 && num <= 9999)
    {
        FourthDigit = num % 10;                     // calculates last digit
        ThirdDigit = (num / 10) % 10;               // calculates third digit
        SecondDigit = ((num / 10) / 10) % 10;       // calculates second digit
        firstDigit = (((num / 10) / 10) / 10) % 10; // calculates first digit
        printf("%d  %d  %d  %d\n", firstDigit, SecondDigit, ThirdDigit, FourthDigit);
    }
    else
    {
        fifthDigit = num % 10;                             // calculates last digit
        FourthDigit = (num / 10) % 10;                     // calculates fourth digit
        ThirdDigit = ((num / 10) / 10) % 10;               // calculates third digit
        SecondDigit = (((num / 10) / 10) / 10) % 10;       // calculates second digit
        firstDigit = ((((num / 10) / 10) / 10) / 10) % 10; // calculates first digit
        printf("%d  %d  %d  %d  %d\n", firstDigit, SecondDigit, ThirdDigit, FourthDigit, fifthDigit);
    }
}