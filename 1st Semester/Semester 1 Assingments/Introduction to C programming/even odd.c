#include<stdio.h>
int main()
{
    int integer;
    printf("Enter an integer: ");
    scanf("%d", &integer);
    if(integer % 2 == 0)
        printf("%d is an even number", integer);
    else
        printf("%d is an odd number", integer);
return 0;

}