#include<stdio.h>
int main()
{
    long sum = 0;
    for (int number = 1; number <= 100; number++)
    {
        if(number % 7 == 0)
        {
            sum = sum + number;
        } 
    }
    printf("The sum of multiples of 7 from 1-100 is: %ld",sum);


}