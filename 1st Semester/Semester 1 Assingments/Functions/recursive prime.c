#include <stdio.h>
int isprime(int, int);
int main()
{
    int number, result;
    printf("Enter -1 to exit\n");
    while(1){
    printf("Enter a number to check whether it is a prime or not:\n");
    printf("> ");
    scanf("%d", &number);
    if (number == -1)
    {
        printf("Exiting from program");
        break;
    }
    
    result = isprime(number, 2);
    if (result == 1)
    {
        printf("%d is prime\n", number);
    }
    else if (result == 0)
    {
        printf("%d is composite\n", number);
    }
    printf("-----------------------------------\n"); // seperator for next iteration
}

    return 0;
}
int isprime(int num, int divisor)
{
    if(divisor == num)
    {
        return 1;
    }
    if (num % divisor == 0)
    {
        return 0;
    }
    return isprime(num, divisor+1);
    
}
