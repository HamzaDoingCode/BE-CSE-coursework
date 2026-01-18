#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Their sum is %d\n", num1 + num2);
    printf("Their difference is %d\n", num1 - num2);
    printf("Their product is %d\n", num1 * num2);
    printf("Their quotient is %d\n", num1 / num2);
    printf("Their remainder is %d\n", num1 % num2);
    return 0;

}