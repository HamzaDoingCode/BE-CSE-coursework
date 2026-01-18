#include <stdio.h>
int main()
{
    float total_miles_per_day, cost_per_gallon, average_miles_per_gallon, parking_fees_day, tolls_per_day;
    printf("Enter total miles driven per day: "); // number of miles to be driven per day
    scanf("%f", &total_miles_per_day);
    printf("Enter cost per gallon of gasoline: "); // a cost of one gallon of gasoline
    scanf("%f", &cost_per_gallon);
    printf("Enter average miles per gallon: "); // average number of miles that can be cover by one one gallon of gasoline
    scanf("%f", &average_miles_per_gallon);
    printf("Enter parking fees per day: ");
    scanf("%f", &parking_fees_day);
    printf("Enter tolls per day: "); // amount of cost spend on tolls per day
    scanf("%f", &tolls_per_day);
    float number_of_gallons = total_miles_per_day / average_miles_per_gallon;
    float total_charges_for_gallon = number_of_gallons * cost_per_gallon;
    float total_charges = total_charges_for_gallon + parking_fees_day + tolls_per_day;
    printf("Based on the above information user’s cost per day of driving to work is %0.1f", total_charges);
    return 0;
}