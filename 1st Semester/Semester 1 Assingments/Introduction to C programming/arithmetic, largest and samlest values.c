#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Sum is %d\n", num1 + num2 + num3);
    printf("Average is %d\n", (num1 + num2 + num3)/3);
    printf("product is %d\n", num1*num2*num3);
    if(num1 < num2 && num1 < num3)
        printf("smallest is %d\n",num1);
    else if(num2 < num1 && num2 < num3)
        printf("smallest is %d\n",num2);
    else
        printf("smallest is %d\n", num3);
    if (num1>num2 && num1 > num3)
        printf("largest is %d",num1);
    else if(num2>num1 && num2 > num3)
        printf("largest is %d",num2);
    else
        printf("largest is %d",num3);
    
    return 0;
}