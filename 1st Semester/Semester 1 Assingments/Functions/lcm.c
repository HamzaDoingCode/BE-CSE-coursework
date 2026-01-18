#include <stdio.h>
int lcm(int, int);
int main()
{
    int num1, num2;
    int LCM;
    printf("Enter first number -1 to exit\n");
    printf("Enter two numbers and check LCM of them: \n");
    while (1)
    {
        printf("> "); // simple input prompt
        scanf("%d", &num1);
        if (num1 == -1)
        {
            printf("Exiting from program\n");
            break;
        }
        else
        {
            scanf("%d", &num2);
            LCM = lcm(num1, num2);
            printf("The lowest common multiple of %d and %d is %d\n", num1, num2, LCM);
        }
    }

    return 0;
}
int lcm(int num1, int num2)
{
    int lcm, max;
    max = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
            return max; // return LCM

        max++;
    }
}
