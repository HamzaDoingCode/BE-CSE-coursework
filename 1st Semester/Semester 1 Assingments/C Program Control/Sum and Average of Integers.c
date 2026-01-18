#include <stdio.h> 

int main() 

{ 

    int numbers; 

    double average, sum = 0; 

    printf("Enter an integer for the numbers of terms for sum and average: \n"); 

    scanf("%d", &numbers); 

    printf("Now Enter consecutive terms\n");

    for (int x = 1; x <= numbers; x++) 

    { 

        int term; 

        scanf("%d", &term); 

        sum = sum + term; 

    } 

    printf("The sum of given terms is: %.1lf\n", sum); 

    printf("The average of given terms is: %.1lf\n", sum / numbers); 

} 