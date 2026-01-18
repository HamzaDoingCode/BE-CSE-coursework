#include <stdio.h>
int main()
{
    int count = 10, number, largest = 0;
    for (int i = 1; i <= count; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > largest)
            largest = number;
    }
    printf("The largest number from the 10 is %d", largest);
}