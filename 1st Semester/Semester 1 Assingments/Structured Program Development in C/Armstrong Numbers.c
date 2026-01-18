#include<stdio.h>
int main()
{
    int number;
    int digit,actual_number = 100;
    for ( actual_number; actual_number <= 999 ; actual_number++)
    {
        number = actual_number;
        int cube = 0;
        for (int i = 1; i <= 3; i++)
        {
            digit = number % 10;
            number = number/10;
            cube = cube + digit*digit*digit;
        }
        if( cube == actual_number)
            {printf("%d\n",actual_number);
            continue;}
        else
            continue;
    }
    
}