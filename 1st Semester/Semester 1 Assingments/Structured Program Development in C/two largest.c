#include <stdio.h>
int main()
{
    int count = 10, number, largest = 0, second_largest = 0;
    for (int i = 1; i <= count; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > largest)
        {
            second_largest = largest;
            largest = number;
        }
    }
    printf("The largest number from the above 10 numbers is %d\n", largest);
    printf("The second largest number from the above 10 numbers is %d\n", second_largest);
}