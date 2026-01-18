/* // Calculating compound interest.
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0; // starting principal
    int rate = 5; // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {
        
        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, year);
        
        // output one table row
        printf("%4u%21.2f\n", year, amount);
    }
}
*/

#include <stdio.h>

int main(void)
{
    // Treat all amounts as integral numbers of pennies
    int principal = 100000;  // $1000.00 in pennies (1000 * 100)
    int rate = 5;           // 5% annual interest rate
    
    printf("%4s%21s\n", "Year", "Amount on deposit");
    printf("------------------------------------\n");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {
        
        // Calculate compound interest using only integers
        // Formula: amount = principal * (1 + rate)^year
        // Since we can't use pow(), we'll use repeated multiplication
        
        int amount = principal;
        
        // Multiply by (1 + rate/100) for each year
        for (int i = 1; i <= year; i++) {
            // amount = amount * (1 + rate/100)
            //        = amount + (amount * rate) / 100
            amount = amount + (amount * rate) / 100;
        }
        
        // Break into dollars and cents
        int dollars = amount / 100;      // Dollar portion
        int cents = amount % 100;        // Cents portion
        
        // Output one table row with period inserted
        printf("%4u%15d.%02d\n", year, dollars, cents);
    }
    
    return 0;
}