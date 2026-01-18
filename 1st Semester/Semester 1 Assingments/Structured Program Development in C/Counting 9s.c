#include<stdio.h>
int main()
{
    long number;
    int digit,count=0;   
    printf("Enter a number(5 digits or fewer): ");
    scanf("%ld",&number);
    for (int i = 1; i <= 5; i++)
    {
        digit = number % 10;
        number = number / 10;
        if (digit == 9)
        {
            count = count + 1;
        }
    }
    printf("There are/is '%d' 9s in the given number",count);
    
}