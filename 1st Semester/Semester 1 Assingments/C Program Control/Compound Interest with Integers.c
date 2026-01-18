// Calculating compound interest.
#include <stdio.h>
int main(void)
{
    int amount = 100000; // 1000$ = 100000 pennies
    int rate = 5; // annual interest rate 5%
    int dollars,cents;



    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {
        
        // calculate new amount for specified year
        amount = amount * 105/100; // new amount = old amount * 105/100 where 105/100 means 1 + 5%.
        dollars = amount / 100; // converts amount into dollars
        cents = amount % 100; // stores cents of dollars.
        
        // output one table row
        printf("%d\t%d.%d\n", year, dollars,cents);
    }
}