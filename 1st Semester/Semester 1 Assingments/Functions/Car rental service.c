#include <stdio.h>
int maxRentOfOneDay = 50;
float calculateCharges(int hours);

int main()
{

    int i = 1;
    float finalCharges = 0;
    int finalHours = 0;
    while (1)
    {
        float totalCharges;
        unsigned hours;
        printf("Enter Total Hours(1-72)(-1 to exit): ");
        scanf("%d", &hours); // Input hours.
        if (hours == -1)
        {
            break;
        }
        else
        {
            totalCharges = calculateCharges(hours);
            finalCharges += totalCharges;
            finalHours += hours;
            printf("Car\tHours\tRent\n\n");
            printf("%d\t%d\t%.2f\n", i, hours, totalCharges);
            printf("-----------------------\n");
            i++;
        }
    }
    printf("Total Charges: %.2f\n", finalCharges);
    printf("Total Hours: %d", finalHours);

    return 0;
}
float calculateCharges(int hours)
{
    int extraCharges;
    float totalCharges;
    float tax;
    tax = hours * 0.50; // calculates service tax
    if (hours <= 8)
    {
        tax = hours * 0.50;      // Calculates tax
        totalCharges = tax + 25; // adds 25$ for first 8 hours
        return totalCharges;
        
    }
    else if (hours > 8 && hours <= 24)
    {
        extraCharges = (hours - 8) * 5; // clculates extra hours and multiplies it with 5
        totalCharges = 25 + extraCharges + tax;
        if (totalCharges >= 50)
        {
            totalCharges = 50 + tax; // if total charges is greater than 50 then it caps it to 50$
        }
        return totalCharges;
    }
    else if (hours > 24 && hours <= 48)
    {
        int SecondDayHours = hours%24;
        if (SecondDayHours <= 8)
        {
            totalCharges = 50 + 25 + tax; // adds 50$ for 1sd day and 25 for 8 hours of 2nd day
        }
        else if(SecondDayHours > 8){
            totalCharges = 50 + 50 + tax; // adds 50$ for 1sd day and 50$ for 2nd day
        }
        return totalCharges;
    }
    else if (hours > 48 && hours <= 72)
    {
        totalCharges = 150 + tax; // adds 50$ per day for 3 days.
        return totalCharges;
    }
    else if (hours > 72)
    {
        printf("You can not rent a car for more than 72 hours\n");
        return 0.00;
    }
}
