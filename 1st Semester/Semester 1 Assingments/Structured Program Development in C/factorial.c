#include<stdio.h>
int main()
{
    long fact = 1;
    int num;
    printf("Enter a non negative integer for factorial: ");
    scanf("%d",&num);
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    printf("The factorial of %d is %ld",num,fact);
    

}